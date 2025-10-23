cmake_minimum_required(VERSION 3.10)

project(mrbind)

# Old CMake doesn't understand `CMAKE_CXX_STANDARD 23`, so instead I add those to `CMAKE_CXX_FLAGS`.
# set(CMAKE_CXX_STANDARD 23)
# set(CMAKE_CXX_EXTENSIONS off)

if(NOT MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23 -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough -Wconversion")

    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        # Just in case, set the flags for both libstdc++ and libc++.
        # Not enabling `_GLIBCXX_DEBUG` here, because it causes some weird segfaults. I think this is because libclang is built without it,
        #   though then it's weird that we get no linker errors, but do get segfaults still.
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_ASSERTIONS -D_LIBCPP_HARDENING_MODE=_LIBCPP_HARDENING_MODE_DEBUG")
    endif()
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstandalone-debug")
endif()

include_directories(include src)
include_directories(deps/cppdecl/include)


add_library(mrbind_common STATIC
    src/common/command_line_args_as_utf8.cpp
    src/common/command_line_parser.cpp
    src/common/filesystem.cpp
    src/common/set_error_handlers.cpp
    src/common/string_escape.cpp
)


option(MRBIND_BUILD_PARSER "Build the parser. Needs libclang to be installed." ON)
if(MRBIND_BUILD_PARSER)
    find_package(Clang REQUIRED)

    add_executable(mrbind
        src/parser/combine_types.cpp
        src/parser/cppdecl_helpers.cpp
        src/parser/data_to_json.cpp
        src/parser/data_to_macros.cpp
        src/parser/main.cpp
        src/parser/multiplex_data.cpp
    )

    target_link_libraries(mrbind PRIVATE
        mrbind_common
    )

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
option(MRBIND_BUILD_GENERATOR_CSHARP "Build the C# binding generator." ON)

if(MRBIND_BUILD_GENERATOR_C OR MRBIND_BUILD_GENERATOR_CSHARP)
    add_library(mrbind_gen_common STATIC
        src/generators/common/data_from_json.cpp
        src/generators/common/load_file.cpp
    )

    add_library(mrbind_c_interop STATIC
        src/generators/c_interop/c_output_desc.cpp
        src/generators/c_interop/desc_to_and_from_json.cpp
    )
    target_link_libraries(mrbind_c_interop PUBLIC
        mrbind_common
    )
endif()

if(MRBIND_BUILD_GENERATOR_C)
    add_executable(mrbind_gen_c
        src/generators/c/binding_common.cpp
        src/generators/c/binding_containers.cpp
        src/generators/c/generator.cpp
        src/generators/c/main.cpp
        src/generators/c/module.cpp
        src/generators/c/modules/std_and_tl_expected.cpp
        src/generators/c/modules/std_array.cpp
        src/generators/c/modules/std_containers.cpp
        src/generators/c/modules/std_filesystem.cpp
        src/generators/c/modules/std_function.cpp
        src/generators/c/modules/std_integral_typedefs.cpp
        src/generators/c/modules/std_iostream.cpp
        src/generators/c/modules/std_optional.cpp
        src/generators/c/modules/std_pair.cpp
        src/generators/c/modules/std_shared_ptr.cpp
        src/generators/c/modules/std_string.cpp
        src/generators/c/modules/std_tuple.cpp
        src/generators/c/modules/std_unique_ptr.cpp
        src/generators/c/modules/std_variant.cpp
        src/generators/c/modules/tags.cpp
    )
    target_include_directories(mrbind_gen_c PRIVATE
        deps/cppdecl/include
    )
    target_link_libraries(mrbind_gen_c PRIVATE
        mrbind_common
        mrbind_gen_common
        mrbind_c_interop
    )
endif()

if(MRBIND_BUILD_GENERATOR_CSHARP)
    add_executable(mrbind_gen_csharp
        src/generators/csharp/main.cpp
    )
    target_include_directories(mrbind_gen_csharp PRIVATE
        deps/cppdecl/include
    )
    target_link_libraries(mrbind_gen_csharp PRIVATE
        mrbind_common
        mrbind_gen_common
        mrbind_c_interop
    )
endif()
