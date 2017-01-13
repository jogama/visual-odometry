file(GLOB SRC *.cpp)
add_executable( DetectFeatures ${SRC} )
target_link_libraries( DetectFeatures ${OpenCV_LIBS} )
