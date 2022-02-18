project (DLL1 LANGUAGES CXX)
include(GenerateExportHeader)

set(SOURCES
	PrintStaticState1.cpp
)
set(HEADERS
    PrintStaticState1.h
 )

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} ${HEADERS})
add_library(DLL1 SHARED ${SOURCES} ${HEADERS})
generate_export_header(DLL1)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${StaticLibWithStaticVariable_SOURCE_DIR})
target_link_libraries(DLL1
    PRIVATE
		StaticLibWithStaticVariable
)

install(TARGETS DLL1 DESTINATION "bin")