# Invokes `mrbind` on multiple files.

# NOTE: While we do rebuild bindings when their original header changes, we DON'T rebuild them when an included header changes.
# Manually destroy the old binding before re-running this.

# For parallel builds, use following flags: -j`nproc` -Otarget

# Configuration:

# Directories:

# We process headers from those directories.
INPUT_DIRS = $(error Must set INPUT_DIRS=... to the source directories that we should process)
# The generated bindings are placed there, and so are object files, etc.
OUTPUT_DIR = $(error Must set OUTPUT_DIR=... to the output directory)

# If specified, those files are skipped despite being in the `INPUT_DIRS` directories.
# Those can contain `%` as a wildcard.
INPUT_FILES_BLACKLIST :=
# An optional whitelist.
# Each file has to match both this and not be in the blacklist.
INPUT_FILES_WHITELIST := %

# A list of .cpp files with additional bindings to generate.
# Those are processed individually, so don't make too many of them.
EXTRA_INPUT_SOURCES :=
# Same, but those are compiled directly. The generator isn't invoked for those.
EXTRA_GENERATED_SOURCES :=


# Input file globs.
INPUT_GLOBS = *.h *.hpp


# If set to >1, will split the generated binding into several fragments, either to reduce RAM usage when compiling, or to
NUM_FRAGMENTS := 1


# The mrbind command. Can include extra flags.
# You might want to override it to set the full path.
MRBIND := mrbind

# Flags for the mrbind command.
MRBIND_FLAGS :=
# Alternative flags for the mrbind command. If not specified, defaults to `MRBIND_FLAGS`.
MRBIND_FLAGS_FOR_EXTRA_INPUTS :=
ifeq ($(origin MRBIND_FLAGS_FOR_EXTRA_INPUTS),file)
MRBIND_FLAGS_FOR_EXTRA_INPUTS = $(MRBIND_FLAGS)
endif


# The compiler executable, possibly with extra flags.
COMPILER = $(error Must set COMPILER=... to compile)
# Compiler flags for both libclang and the actual compilation.
COMPILER_FLAGS =
# Compiler flags for libclang only.
COMPILER_FLAGS_LIBCLANG = -fparse-all-comments -xc++-header

# Compilation config: (optional if you just want to generate the sources)

# Like `COMPILER`, but for linking.
# Will usually contain only the compiler name, since the linked libraries need to be after the object files in some linkers. Prefer `LINKER_FLAGS` for the flags.
LINKER = $(error Must set LINKER=... when linking the bindings)
# The linker flags.
LINKER_FLAGS :=

# The output filename for linking.
LINKER_OUTPUT = $(error Must set LINKER_OUTPUT=... when linking the bindings)

# ---

.DELETE_ON_ERROR: # Delete output on command failure. Otherwise you'll get incomplete bindings.

# An LF constant.
override define lf :=
$(call)
$(call)
endef

# Recursive wildcard function. $1 is a list of directories, $2 is a list of wildcards.
override rwildcard = $(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))

# Enclose in single quotes for the shell.
override quote = '$(subst ','"'"',$1)'

# Assign to a variable safely, e.g. `$(call var,foo := 42)`.
override var = $(eval override $(subst $,$$$$,$1))

# A string of all single-letter Make flags, without spaces.
override single_letter_makeflags := $(filter-out -%,$(firstword $(MAKEFLAGS)))
# Non-empty if this is a dry run with `-n`.
override dry_run := $(findstring n,$(single_letter_makeflags))
# Non-empty if `--trace` is present.
override tracing := $(filter --trace,$(MAKEFLAGS))

# Same as `$(shell )`, but triggers an error if the command fails.
override safe_shell = $(if $(dry_run),$(warning Would run command: $1),$(if $(tracing),$(warning Running command: $1))$(shell $1)$(if $(tracing),$(warning Command returned $(.SHELLSTATUS)))$(if $(filter 0,$(.SHELLSTATUS)),,$(error Command failed with exit code $(.SHELLSTATUS): `$1`)))

# ---

# Whether the `OBJ_DIR` variable is specified by the user.
override obj_dir_specified = $(filter-out file,$(origin OBJ_DIR))

# The list of input files.
override input_files := $(filter-out $(INPUT_FILES_BLACKLIST),$(filter $(INPUT_FILES_WHITELIST),$(call rwildcard,$(INPUT_DIRS),$(INPUT_GLOBS))))

# Create the output directory.
$(OUTPUT_DIR):
	@mkdir -p $(call quote,$@)

# The single header including all target headers.
$(OUTPUT_DIR)/combined.hpp: $(input_files) | $(OUTPUT_DIR)
	$(file >$@,)
	$(foreach f,$(input_files),$(file >>$@,#include "$f"$(lf)))

# Generate the binding.
.PHONY: generate
generate: $(OUTPUT_DIR)/binding.cpp
$(OUTPUT_DIR)/binding.cpp: $(OUTPUT_DIR)/combined.hpp | $(OUTPUT_DIR)
	@echo $(call quote,[Generating] binding.cpp)
	@$(MRBIND) $(MRBIND_FLAGS) $(call quote,$<) -o $(call quote,$@) -- $(COMPILER_FLAGS_LIBCLANG) $(COMPILER_FLAGS)

# Compile the binding.
override object_files := $(patsubst %,$(OUTPUT_DIR)/binding.%.o,$(call safe_shell,bash -c $(call quote,echo {0..$(call safe_shell,bash -c 'echo $$(($(strip $(NUM_FRAGMENTS))-1))')})))
$(OUTPUT_DIR)/binding.%.o: $(OUTPUT_DIR)/binding.cpp | $(OUTPUT_DIR)
	@echo $(call quote,[Compiling] $< (fragment $*))
	@$(COMPILER) $(call quote,$<) -c -o $(call quote,$@) $(COMPILER_FLAGS) -DMB_NUM_FRAGMENTS=$(strip $(NUM_FRAGMENTS)) -DMB_FRAGMENT=$* $(if $(filter 0,$*),-DMB_DEFINE_IMPLEMENTATION)

# Generate and compile extra files.
override define extra_file_snippet =
$(call var,_generated := $(OUTPUT_DIR)/binding_extra.$(basename $(notdir $1)).cpp)
$(call var,_object := $(_generated:.cpp=.o))
$(call var,object_files += $(_object))
generate: $(_generated)
$(_generated): $1 | $(OUTPUT_DIR)
	@echo $(call quote,[Generating] $(notdir $(_generated)))
	@$(MRBIND) $(MRBIND_FLAGS_FOR_EXTRA_INPUTS) $(call quote,$1) -o $(call quote,$(_generated)) -- $(COMPILER_FLAGS_LIBCLANG) $(COMPILER_FLAGS)
$(_object): $(_generated) | $(OUTPUT_DIR)
	@echo $(call quote,[Compiling] $(_generated))
	@$(COMPILER) $(call quote,$(_generated)) -c -o $(call quote,$(_object)) $(COMPILER_FLAGS)
endef
$(foreach s,$(EXTRA_INPUT_SOURCES),$(eval $(call extra_file_snippet,$s)))

# Compile extra pre-generated files.
override define extra_pregen_file_snippet =
$(call var,_object := $(OUTPUT_DIR)/$(notdir $(1:.cpp=.o)))
$(call var,object_files += $(_object))
$(_object): $1 | $(OUTPUT_DIR)
	@echo $(call quote,[Compiling] $1)
	@$(COMPILER) $(call quote,$1) -c -o $(call quote,$(_object)) $(COMPILER_FLAGS)
endef
$(foreach s,$(EXTRA_GENERATED_SOURCES),$(eval $(call extra_pregen_file_snippet,$s)))

# Link the binding.
.DEFAULT_GOAL := build
.PHONY: build
build: $(LINKER_OUTPUT)
$(LINKER_OUTPUT): $(object_files)
	@echo $(call quote,[Linking] $@)
	@$(LINKER) $^ -o $(call quote,$@) $(LINKER_FLAGS)
