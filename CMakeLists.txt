cmake_minimum_required(VERSION 3.16)
project(MixStaticDynamicLink-test LANGUAGES CXX)

add_subdirectory(StaticLibWithStaticVariable)
add_subdirectory(DLL1)
add_subdirectory(DLL2)
add_subdirectory(TestProgram)
