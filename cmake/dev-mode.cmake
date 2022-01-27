include(cmake/folders.cmake)

set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)
include(CTest)

if (BUILD_TESTING)
    add_subdirectory(test)
    add_subdirectory(size_test)
endif ()

option(BUILD_MCSS_DOCS "Build documentation using Doxygen and m.css" OFF)
if (BUILD_MCSS_DOCS)
    include(cmake/docs.cmake)
endif ()

option(ENABLE_COVERAGE "Enable coverage support separate from CTest's" OFF)
if (ENABLE_COVERAGE)
    include(cmake/coverage.cmake)
endif ()

if (CMAKE_HOST_SYSTEM_NAME STREQUAL "Windows")
    include(cmake/open-cpp-coverage.cmake OPTIONAL)
endif ()

include(cmake/lint-targets.cmake)
include(cmake/spell-targets.cmake)

add_folders(Project)
