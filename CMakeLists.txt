cmake_minimum_required(VERSION 3.16)
project(MixStaticDynamicLink-test LANGUAGES CXX)

set (CMAKE_EXPORT_COMPILE_COMMANDS ON) #print all compile commands to compile_commands.json for debugging

add_subdirectory(StaticLibWithStaticVariable)
add_subdirectory(DLL1)
add_subdirectory(DLL2)
add_subdirectory(TestProgram)
