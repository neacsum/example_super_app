# CMake file for sample application super_app
# (c) Mircea Neacsu 2023

cmake_minimum_required(VERSION 3.13)

# For Windows platform, use "x86" instead of "win32" in output directories
if (WIN32)
set (pfx $<IF:$<STREQUAL:${CMAKE_GENERATOR_PLATFORM},win32>,x86,x64>)
else()
set (pfx "")
endif()

# All include directories are subfolders of ./include
include_directories (include)

link_directories (PUBLIC ${CMAKE_SOURCE_DIR}/lib/${pfx}/$<CONFIG>)

project (super_app)

# Add main program
add_executable (${PROJECT_NAME})

# All link directories are subfolders of ./lib
target_link_directories (${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/lib/${pfx}/$<CONFIG>)

# Add source files
add_subdirectory (src)

# Set location of main program (./bin/<Platform>/<Configuration>)
set_target_properties (${PROJECT_NAME} PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/$<CONFIG>
)

# Add dependent libraries
target_link_libraries (super_app PRIVATE cool_A cool_B)
