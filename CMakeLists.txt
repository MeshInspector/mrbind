cmake_minimum_required(VERSION 3.10)

project(mrbind)

set(MRBIND_LLVM_PREFIX "/usr/lib/llvm-18" CACHE FILEPATH "Path to installed libclang")
message("mrbind: Using libclang at ${MRBIND_LLVM_PREFIX}")

add_executable(mrbind src/main.cpp)
set_property(TARGET mrbind PROPERTY CXX_STANDARD 20)
set_property(TARGET mrbind PROPERTY CXX_EXTENSIONS off)

if(NOT MSVC)
    target_compile_options(mrbind PRIVATE -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough)
endif()

target_include_directories(mrbind PRIVATE "${MRBIND_LLVM_PREFIX}/include")
target_link_directories(mrbind PRIVATE "${MRBIND_LLVM_PREFIX}/lib")
target_link_libraries(mrbind PRIVATE clang)
