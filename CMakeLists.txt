cmake_minimum_required(VERSION 3.10)

project(mrbind)

add_executable(mrbind src/main.cpp)
set_property(TARGET mrbind PROPERTY CXX_STANDARD 20)
set_property(TARGET mrbind PROPERTY CXX_EXTENSIONS off)

if(NOT MSVC)
    target_compile_options(mrbind PRIVATE -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough -Wconversion)
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(mrbind PRIVATE -fstandalone-debug)
endif()

find_package(Clang REQUIRED)

target_include_directories(mrbind PRIVATE ${LLVM_INCLUDE_DIR} ${CLANG_INCLUDE_DIR})
target_link_libraries(mrbind PRIVATE clangTooling)
