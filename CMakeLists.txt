cmake_minimum_required(VERSION 3.10)

project(mrbind)

add_executable(mrbind src/main.cpp)
set_property(TARGET mrbind PROPERTY CXX_STANDARD 20)
set_property(TARGET mrbind PROPERTY CXX_EXTENSIONS off)

if(NOT MSVC)
    target_compile_options(mrbind PRIVATE -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough -Wconversion)
endif()

find_package(Clang REQUIRED)

target_include_directories(mrbind PRIVATE "deps/nlohmann_json/single_include" "${MRBIND_LLVM_PREFIX}/include")
target_link_libraries(mrbind PRIVATE libclang)
