cmake_minimum_required(VERSION 3.15.0 FATAL_ERROR)
project(cpp_redis CXX)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()

# Grab tacopie
FetchContent_Declare(
	tacopie
	GIT_REPOSITORY https://github.com/alexnorell/tacopie.git
)
FetchContent_MakeAvailable(tacopie)

add_subdirectory(sources)

if(BUILD_EXAMPLES)
	add_subdirectory(examples)
endif()

if(BUILD_TESTS)
	add_subdirectory(tests)
endif()

