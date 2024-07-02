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


# Input file globs.
INPUT_GLOBS = *.h *.hpp


# If set to >1, will split the generated binding into several fragments, either to reduce RAM usage when compiling, or to
NUM_FRAGMENTS := 1
override NUM_FRAGMENTS := $(filter-out 0 1,$(NUM_FRAGMENTS))


# The mrbind command. Can include extra flags.
# You might want to override it to set the full path.
MRBIND = mrbind

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
LINKER_OUTPUT = $(error Must set LINK_OUTPUT=... when linking the bindings)

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
override var = $(eval override $(subst #,$$(strip #),$(subst $,$$$$,$1)))

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
generate: $(generated_sources)
override generated_sources := $(patsubst %,$(OUTPUT_DIR)/%.cpp,$(if $(NUM_FRAGMENTS),$(addprefix binding.,$(call safe_shell,bash -c $(call quote,echo {1..$(strip $(NUM_FRAGMENTS))}))),binding))
$(generated_sources) &: $(OUTPUT_DIR)/combined.hpp
	@echo $(call quote,[Generating] $(generated_sources))
	@$(MRBIND) $(call quote,$<) $(foreach x,$(generated_sources),-o $(call quote,$x)) -- $(COMPILER_FLAGS_LIBCLANG) $(COMPILER_FLAGS)

# Compile the binding.
$(OUTPUT_DIR)/%.o: $(OUTPUT_DIR)/%.cpp
	@echo $(call quote,[Compiling] $<)
	@$(COMPILER) $(call quote,$<) -c -o $(call quote,$@) $(COMPILER_FLAGS) $(if $(filter $(firstword $(generated_sources)),$<),,-DMRBIND_IS_SECONDARY_FILE)

# Link the binding.
.DEFAULT_GOAL := build
.PHONY: build
build: $(LINKER_OUTPUT)
$(LINKER_OUTPUT): $(generated_sources:.cpp=.o)
	@echo $(call quote,[Linking] $@)
	@$(LINKER) $^ -o $(call quote,$@) $(LINKER_FLAGS)
