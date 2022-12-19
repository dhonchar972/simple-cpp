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

add_executable(CMakeExample ${SOURCES})
#add_library(${LIBRARY_NAME} OBJECT ${SOURCES})

if (CMAKE_VERSION VERSION_GREATER 3.13)
  set_property(TARGET CMakeExample PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(CMakeExample PUBLIC include/)

#target_link_libraries(CMakeExample PRIVATE ${LIBRARY_NAME})

# add_subdirectory(tests)  # Folder that contains another "CMakeLists.txt" file.
