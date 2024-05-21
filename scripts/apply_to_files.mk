# Invokes `mrbind` on multiple files.

# NOTE: While we do rebuild bindings when their original header changes, we DON'T rebuild them when an included header changes.
# Manually destroy the old binding before re-running this.

# Configuration:

# Directories.
DB_DIR = $(error Must set DB_DIR=... to the directory with `compile_commands.json`)
INPUT_DIRS = $(error Must set INPUT_DIRS=... to the source directories that we should process)
OUTPUT_DIR = $(error Must set OUTPUT_DIR=... to the output directory)

# Input file globs.
INPUT_GLOBS = *.h *.hpp

# The mrbind command. You might want to override it to set the full path.
MRBIND = mrbind

# Extra compiler flags for libclang.
COMPILER_FLAGS = -fparse-all-comments -xc++-header

# ---

.DELETE_ON_ERROR: # Delete output on command failure. Otherwise you'll get incomplete bindings.

# Recursive wildcard function. $1 is a list of directories, $2 is a list of wildcards.
override rwildcard = $(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))

# Enclose in single quotes for the shell.
override quote = '$(subst ','"'"',$1)'

# Assign to a variable safely, e.g. `$(call var,foo := 42)`.
override var = $(eval override $(subst #,$$(strip #),$(subst $,$$$$,$1)))


# The list of input files.
override input_files := $(call rwildcard,$(INPUT_DIRS),$(INPUT_GLOBS))

# Converts input filenames to filenames relative to the input dir.
override input_filenames_to_relative = $(patsubst $(addsuffix /%,$(INPUT_DIRS)),%,$1)

# Converts input filenames to output filenames.
override input_filenames_to_output = $(call var,_ret := $(addprefix $(OUTPUT_DIR)/,$(call input_filenames_to_relative,$1)))$(foreach x,$(INPUT_GLOBS),$(call var,_ret := $(patsubst $(subst *,%,$x),%.binding.cpp,$(_ret))))$(_ret)

# The list of output files.
override output_files = $(call input_filenames_to_output,$(input_files))

# Make sure there are no duplicates in the output files.
$(if $(filter-out $(words $(sort $(output_files))),$(words $(output_files))),$(error Several input files map to the same output file. You might need to adjust `INPUT_GLOBS`))

# The list of files that need directories to be created for them.
override files_needing_dirs :=

override define one_file_snippet =
$(call var,_output := $(call input_filenames_to_output,$1))
$(call var,files_needing_dirs += $(_output))

$(_output): $1
	$$(info [Generating] $(_output))
	@$(MRBIND) -i $(call quote,$1) -o $(call quote,$(_output)) -d $(call quote,$(DB_DIR)) -- $(COMPILER_FLAGS)
endef

# The individual file targets.
$(foreach f,$(input_files),$(eval $(call one_file_snippet,$f)))

# Director targets.
$(foreach x,$(files_needing_dirs),$(eval $x: | $(dir $x)))
$(foreach x,$(sort $(dir $(files_needing_dirs))),$(eval $x: ; @mkdir -p $(call quote,$x)))

# The `all` target.
.DEFAULT_GOAL := all
.PHONY: all
all: $(output_files)