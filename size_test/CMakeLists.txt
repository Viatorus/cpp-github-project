cmake_minimum_required(VERSION 3.14)

project(cpprjSizeTests LANGUAGES CXX)

include(../cmake/project-is-top-level.cmake)
include(../cmake/folders.cmake)
include(../cmake/windows-set-path.cmake)

if(PROJECT_IS_TOP_LEVEL)
    find_package(cpprj REQUIRED)
    enable_testing()
endif()

add_executable(cpprj_size_test_base
        base.cpp
        stubs.cpp
        )

target_link_libraries(cpprj_size_test_base PRIVATE cpprj::cpprj)
target_compile_features(cpprj_size_test_base PRIVATE cxx_std_20)

add_executable(cpprj_size_test_string
        string.cpp
        stubs.cpp
        )

target_link_libraries(cpprj_size_test_string PRIVATE cpprj::cpprj)
target_compile_features(cpprj_size_test_string PRIVATE cxx_std_20)

add_executable(cpprj_size_test_to_string
        to_string.cpp
        stubs.cpp
        )

target_link_libraries(cpprj_size_test_to_string PRIVATE cpprj::cpprj)
target_compile_features(cpprj_size_test_to_string PRIVATE cxx_std_20)

add_folders(SizeTest)
