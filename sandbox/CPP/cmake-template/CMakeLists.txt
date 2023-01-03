cmake_minimum_required(VERSION 3.8)

project(CMakeExample
        VERSION 1.0
        DESCRIPTION "Simple CMake Example"
        LANGUAGES CXX
)

option(ENABLE_WARNINGS_SETTINGS ON)
option(ENABLE_LTO OFF)
option(ENABLE_DOCTESTS OFF)

set(SOURCES
    src/main.cpp
    src/exceptions/file_exception.cpp
    src/lines/lines.cpp
)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -Wall")
#set(Boost_USE_STATIC_LIBS OFF)
#set(Boost_USE_MULTITHREADED ON)
#find_package(Boost COMPONENTS chrono filesystem REQUIRED)

add_executable(CMakeExample ${SOURCES})
#add_library(foo STATIC ${SOURCE_LIB}) # STATIC, SHARED
#add_definitions(-DSOME_IMPORTANT_DEFINITION)

if (CMAKE_VERSION VERSION_GREATER 3.13)
  set_property(TARGET CMakeExample PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(CMakeExample PUBLIC include/)  # include_directories("headers/" "more_headers/")

#target_link_libraries(CMakeExample PRIVATE ${LIBRARY_NAME})

# add_subdirectory(tests)  # Folder that contains another "CMakeLists.txt" file.
