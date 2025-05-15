cmake_minimum_required(VERSION 3.10)

project(mrbind)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS off)

if(NOT MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough -Wconversion")
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstandalone-debug")
endif()

include_directories(include src)


add_library(mrbind_common STATIC
    src/common/set_error_handlers.cpp
)


option(MRBIND_BUILD_PARSER "Build the parser. Needs libclang to be installed." ON)
if(MRBIND_BUILD_PARSER)
    find_package(Clang REQUIRED)

    add_executable(mrbind
        src/parser/combine_types.cpp
        src/parser/data_to_json.cpp
        src/parser/data_to_macros.cpp
        src/parser/main.cpp
        src/parser/multiplex_data.cpp
        src/parser/string_manip.cpp
    )

    target_link_libraries(mrbind PRIVATE
        mrbind_common
    )

    # Right now we only use this for optional type simplification, so this could be disabled relatively easily.
    target_include_directories(mrbind PRIVATE deps/cppdecl/include)

    target_include_directories(mrbind PRIVATE ${LLVM_INCLUDE_DIR} ${CLANG_INCLUDE_DIR})

    if (TARGET clangTooling)
        target_link_libraries(mrbind PRIVATE clangTooling)
    else()
        # The only platforms where this branch is used (that I know of) are Arch and Rocky.
        # The `LLVM` part is only needed on Rocky.
        # Trying this on e.g. Ubuntu causes the following runtime error when you run the resulting application:
        #   LLVM ERROR: inconsistency in registered CommandLine options
        target_link_libraries(mrbind PRIVATE clang-cpp LLVM LLVMSupport)
    endif()
endif()


option(MRBIND_BUILD_GENERATOR_C "Build the C binding generator." ON)

if(MRBIND_BUILD_GENERATOR_C)
    add_library(mrbind_gen_common STATIC
        src/generators/common/command_line_args_as_utf8.cpp
        src/generators/common/data_from_file.cpp
        src/generators/common/data_from_json.cpp
        src/generators/common/load_file.cpp
    )
endif()

if(MRBIND_BUILD_GENERATOR_C)
    add_executable(mrbind_gen_c
        src/generators/c/generator.cpp
        src/generators/c/main.cpp
        src/generators/c/module.cpp
        src/generators/c/modules/std_string.cpp
    )
    target_include_directories(mrbind_gen_c PRIVATE
        deps/cppdecl/include
    )
    target_link_libraries(mrbind_gen_c PRIVATE
        mrbind_common
        mrbind_gen_common
    )
endif()
