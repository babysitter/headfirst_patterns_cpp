cmake_minimum_required (VERSION 3.1) 

set( PROJECT_NAME adapter )

project( ${PROJECT_NAME} CXX )

set( MODERN_SOURCES
    AdapterTestDrive.cpp
)

add_executable( ${PROJECT_NAME} ${MODERN_SOURCES} )
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
)
