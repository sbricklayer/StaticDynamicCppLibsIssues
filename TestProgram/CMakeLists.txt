project (TestProgram LANGUAGES CXX)

set(SOURCES
  main.cpp
)

set(HEADERS

)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} ${HEADERS})
add_executable(TestProgram ${SOURCES} ${HEADERS})

include_directories(${DLL1_SOURCE_DIR} ${DLL1_BINARY_DIR})
include_directories(${DLL2_SOURCE_DIR} ${DLL2_BINARY_DIR})
target_link_libraries(TestProgram
    PUBLIC
        DLL1
        DLL2
)

install(TARGETS TestProgram DESTINATION "bin")
