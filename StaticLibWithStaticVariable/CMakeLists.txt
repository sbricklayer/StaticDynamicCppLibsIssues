project (StaticLibWithStaticVariable LANGUAGES CXX)

set(SOURCES
	StaticVariable.cpp
)
set(HEADERS
    StaticVariable.h
 )

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} ${HEADERS})
add_library(StaticLibWithStaticVariable ${SOURCES} ${HEADERS})
target_include_directories(StaticLibWithStaticVariable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
