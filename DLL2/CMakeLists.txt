project (DLL2 LANGUAGES CXX)
include(GenerateExportHeader)

set(SOURCES
	PrintStaticState2.cpp
)
set(HEADERS
    PrintStaticState2.h
 )

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} ${HEADERS})
add_library(DLL2 SHARED ${SOURCES} ${HEADERS})
generate_export_header(DLL2)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${StaticLibWithStaticVariable_SOURCE_DIR})
target_link_libraries(DLL2
    PRIVATE
		StaticLibWithStaticVariable
)

install(TARGETS DLL2 DESTINATION "bin")