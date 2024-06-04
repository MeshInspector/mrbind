# Invokes `mrbind` on multiple files.

# NOTE: While we do rebuild bindings when their original header changes, we DON'T rebuild them when an included header changes.
# Manually destroy the old binding before re-running this.

# For parallel builds, use following flags: -j`nproc` -Otarget

# Configuration:

# Directories:

# We process headers from those directories.
INPUT_DIRS = $(error Must set INPUT_DIRS=... to the source directories that we should process)
# The generated bindings are placed there.
CODEGEN_DIR = $(error Must set CODEGEN_DIR=... to the code generation output directory)

# This is passed to Clang's libtooling flag `-p ...`.
# Supposedly this is related to the `compile_commands.json` search, and also to the relative paths in the compilation database.
# E.g. when you build with CMake, you can point this to the CMake build dir.
ORIGINAL_BUILD_DIR :=

# If specified, those files are skipped despite being in the `INPUT_DIRS` directories.
# Those can contain `%` as a wildcard.
INPUT_FILES_BLACKLIST :=
# An optional whitelist.
# Each file has to match both this and not be in the blacklist.
INPUT_FILES_WHITELIST := %


# Input file globs.
INPUT_GLOBS = *.h *.hpp

# The mrbind command. Can include extra flags.
# You might want to override it to set the full path.
MRBIND = mrbind

# Extra compiler flags for libclang.
LIBCLANG_COMPILER_FLAGS =
LIBCLANG_COMPILER_FLAGS_LOW = -fparse-all-comments -xc++-header

# Compilation config: (optional if you just want to generate the sources)

OBJ_DIR = $(error Must set OBJ_DIR=... when compiling the bindings)
# The command for compiling the bindings. Will usually contain at least `clang++`. For Pybind11, you may need paths to Python and Pybind11 headers, if you don't already have them in your `compile_commands.json`.
# For now we only support GCC-style flags. In theory supporting MSVC isn't hard, but since even on Windows your `compile_commands.json` will likely be GCC-style (because MSVC-style is wonky), this doesn't make much sense.
COMPILE_COMMAND = $(error Must set COMPILE_COMMAND=... when compiling the bindings)
# Same, but for linking. Will usually contain only the compiler name, since the linked libraries need to be after the object files in some linkers. Prefer `LINK_FLAGS` for the flags.
LINK_COMMAND = $(error Must set LINK_COMMAND=... when linking the bindings)
# The linker flags.
LINK_FLAGS :=

# The output filename for linking.
LINK_OUTPUT = $(error Must set LINK_OUTPUT=... when linking the bindings)

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

# Converts input filenames to filenames relative to the input dir.
override input_filenames_to_relative = $(patsubst $(addsuffix /%,$(INPUT_DIRS)),%,$1)

# Given input filenames, strip `INPUT_GLOBS` extensions from them.
override strip_input_ext = $(call,$(call var,_ret := $1)$(foreach x,$(INPUT_GLOBS),$(call var,_ret := $(patsubst $(subst *,%,$x),%,$(_ret)))))$(_ret)

# Converts input filenames to generated file names.
override input_filenames_to_generated = $(patsubst %,$(CODEGEN_DIR)/%.binding.cpp,$(call strip_input_ext,$(call input_filenames_to_relative,$1)))

# Converts input filenames to object file names for the generated bindings.
override input_filenames_to_obj = $(patsubst %,$(OBJ_DIR)/%.o,$(call strip_input_ext,$(call input_filenames_to_relative,$1)))

# The list of generated source files.
override generated_files := $(call input_filenames_to_generated,$(input_files))
# The list of object files, or empty if `OBJ_DIR` is not specified.
override obj_files := $(if $(obj_dir_specified),$(call input_filenames_to_obj,$(input_files)))

# Make sure there are no duplicates in the output files.
$(if $(filter-out $(words $(sort $(generated_files))),$(words $(generated_files))),$(error Several input files map to the same output file. You might need to adjust `INPUT_GLOBS`))

# The list of files that need directories to be created for them.
override files_needing_dirs :=

# A function used to generate recipes for each individual input file.
override define one_file_snippet =
# Generated file.
$(call var,_gen_output := $(call input_filenames_to_generated,$1))
# Flags guessed from the compilation database.
$(call var,_cmd_output := $(call input_filenames_to_generated,$1).command)
$(if $(any_cmd_file),,$(call var,any_cmd_file := $(_cmd_output)))
# Object file. Here if `OBJ_DIR` is not overridden by the user, we use a placeholder. No files will be generated at that path anyway.
$(call var,_obj_output := $(if $(obj_dir_specified),$(call input_filenames_to_obj,$1),$(foreach OBJ_DIR,/dummy,$(call input_filenames_to_obj,$1))))
$(call var,files_needing_dirs += $(_gen_output) $(_cmd_output) $(_obj_output))

# Generated source.
$(_gen_output) $(_cmd_output) &: $1
	@echo $(call quote,[Generating] $(_gen_output))
	@$(MRBIND) $(call quote,$1) >$(call quote,$(_gen_output)) $(if $(ORIGINAL_BUILD_DIR),-p $(call quote,$(ORIGINAL_BUILD_DIR))) --dump-command0 $(call quote,$(_cmd_output)) $(foreach x,$(LIBCLANG_COMPILER_FLAGS_LOW) $(LIBCLANG_COMPILER_FLAGS),--extra-arg-before=$(call quote,$x))
	$(call, ### Remove the first entry from the command, which is the compiler name. Also remove the language mode overrides, since we always produce C++.)
	@perl -pe 's/\0-x\0?[^\0]+//g;s/^[^\0]+\0//' -i $(call quote,$(_cmd_output))

# Object file for it.
$(_obj_output): $(_gen_output) $(_cmd_output)
	$(call, ### Check that OBJ_DIR is defined properly.)
	$$(call,$$(OBJ_DIR))
	@echo $(call quote,[Compiling] $(_gen_output))
	$(call, ### Note that we use -I to add the directory of the input file to the header search path. In cases it uses #include "..." to include files from the same directory.)
	@xargs -0 -a $(call quote,$(_cmd_output)) $$(COMPILE_COMMAND) -c $(call quote,$(_gen_output)) -o $(call quote,$(_obj_output)) -I$(call quote,$(dir $1))
endef

# The individual file targets.
$(foreach f,$(input_files),$(eval $(call one_file_snippet,$f)))

# Generate all files.
.DEFAULT_GOAL := generate_all
.PHONY: generate_all
generate_all: $(generated_files)

# An extra object file to put the implementation to.
# First, a little generated source file.
override impl_src_file := $(if $(obj_dir_specified),$(OBJ_DIR),/dummy)/__impl.cpp
override impl_obj_file := $(impl_src_file:.cpp=.o)
$(impl_src_file):
	@$(file >$@,#define MRBIND_IS_IMPL_FILE 1$(lf)#include MRBIND_HEADER$(lf))
$(impl_obj_file): $(impl_src_file) $(any_cmd_file)
	$(call, ### Here we just grab the flags from a random source file. Better than no flags at all.)
	@$(if $(any_cmd_file),xargs -0 -a $(call quote,$(any_cmd_file))) $(COMPILE_COMMAND) -c $(call quote,$<) -o $(call quote,$@)
override files_needing_dirs += $(impl_src_file) $(impl_obj_file)
override obj_files := $(impl_obj_file) $(obj_files)# Inserting the new object file first, to compile it first and catch any errors early.

# Compile all files (this implies generation).
.PHONY: compile_all
ifneq ($(obj_dir_specified),)
compile_all: $(obj_files)
else
compile_all:
	$(error Must specify OBJ_DIR and COMPILE_COMMAND to compile)
endif

# Link compiled files (this implies generation and compilation).
.PHONY: build
build: $(LINK_OUTPUT)

$(LINK_OUTPUT): $(obj_files)
	@echo $(call quote,[Linking] $(LINK_OUTPUT))
	@MSYS2_ARG_CONV_EXCL=* $(LINK_COMMAND) -o $(call quote,$(LINK_OUTPUT)) $(obj_files) $(LINK_FLAGS)




# ---

# Directory targets.
$(foreach x,$(files_needing_dirs),$(eval $x: | $(dir $x)))
$(foreach x,$(sort $(dir $(files_needing_dirs))),$(eval $x: ; @mkdir -p $(call quote,$x)))
