cmake_minimum_required(VERSION 2.8)
project( VisualOdometry )


# Set the output directories for the binary files
get_filename_component(BIN_DIR "${CMAKE_SOURCE_DIR}/bin"  ABSOLUTE )
set( EXECUTABLE_OUTPUT_PATH    "${BIN_DIR}" CACHE PATH "" )
set( RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}"  CACHE PATH "" )

# Find OpenCV
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

# Add Subdirectories
add_subdirectory( src )
