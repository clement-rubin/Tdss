cmake_minimum_required (VERSION 3.9)

project(TP02)

if(NOT MSVC)
    link_libraries(m) #to link with libm on Unix 
endif()

add_executable (main_2.cpp "main_2.cpp")

#add_executable (Shape_cpp_modified "shape_cpp.cpp" "main_cpp_modified.cpp")
