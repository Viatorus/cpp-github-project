cmake_minimum_required(VERSION 3.14)

project(cpprjTests LANGUAGES CXX)

include(../cmake/project-is-top-level.cmake)
include(../cmake/folders.cmake)
include(../cmake/windows-set-path.cmake)

if(PROJECT_IS_TOP_LEVEL)
  find_package(cpprj REQUIRED)
  enable_testing()
endif()

add_executable(cpprj_test source/cpprj_test.cpp)
target_link_libraries(cpprj_test PRIVATE cpprj::cpprj)
target_compile_features(cpprj_test PRIVATE cxx_std_20)

add_test(NAME cpprj_test COMMAND cpprj_test)

add_folders(Test)
