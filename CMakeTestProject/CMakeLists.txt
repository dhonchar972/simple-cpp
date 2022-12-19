# CMakeList.txt : CMake project for CMakeTestProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeTestProject" LANGUAGES CXX)

# Add source to this project's executable.
add_executable (CMakeTestProject   "src/main.cpp" "src/exceptions/file_exception.cpp" "src/lines/lines.cpp" "include/file_exception.h" "include/lines.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTestProject PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(CMakeTestProject PUBLIC include/)

# TODO: Add tests and install targets if needed.
