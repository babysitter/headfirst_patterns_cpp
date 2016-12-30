cmake_minimum_required (VERSION 3.1) 

set( PROJECT_NAME observer )

project( ${PROJECT_NAME} CXX )

set( MODERN_SOURCES
    Subject.cpp
    ObserverDisplay.cpp
    WeatherStation.cpp
    WeatherData.cpp
    CurrentConditionsDisplay.cpp
)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_executable( ${PROJECT_NAME} ${MODERN_SOURCES} )
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
)
