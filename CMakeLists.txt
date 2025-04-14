cmake_minimum_required(VERSION 3.10)

project(mrbind)

add_executable(mrbind
    src/combine_types.cpp
    src/data_to_json.cpp
    src/data_to_macros.cpp
    src/main.cpp
    src/multiplex_data.cpp
    src/string_manip.cpp
)
set_property(TARGET mrbind PROPERTY CXX_STANDARD 20)
set_property(TARGET mrbind PROPERTY CXX_EXTENSIONS off)

if(NOT MSVC)
    target_compile_options(mrbind PRIVATE -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough -Wconversion)
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(mrbind PRIVATE -fstandalone-debug)
endif()

target_include_directories(mrbind PUBLIC include)

find_package(Clang REQUIRED)

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
