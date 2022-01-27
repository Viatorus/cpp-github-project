cmake_minimum_required(VERSION 3.14)

project(cpprjSizeTests LANGUAGES CXX)

include(../cmake/project-is-top-level.cmake)
include(../cmake/folders.cmake)
include(../cmake/windows-set-path.cmake)

if (PROJECT_IS_TOP_LEVEL)
    find_package(cpprj REQUIRED)
endif ()

macro(create_size_test TARGET SOURCE)
    add_executable(${TARGET}
            stubs.cpp
            ${SOURCE}
            )

    target_link_libraries(${TARGET} PRIVATE cpprj::cpprj)
    target_compile_features(${TARGET} PRIVATE cxx_std_20)

    list(APPEND SIZE_COVERAGE_FILES ${PROJECT_BINARY_DIR}/${TARGET})
endmacro()

create_size_test(cpprj_size_test_base base.cpp) # Base file must be the first one.
create_size_test(cpprj_size_test_string string.cpp)
create_size_test(cpprj_size_test_to_string to_string.cpp)

option(ENABLE_SIZE_COVERAGE "Enable size-coverage support separate from CTest's" OFF)
if (ENABLE_SIZE_COVERAGE)
    include(../cmake/size-coverage.cmake)
endif ()

add_folders(size_test)
