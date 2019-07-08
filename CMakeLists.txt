cmake_minimum_required (VERSION 2.8)

project(Dxp_project)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#SET(CMAKE_C_COMPILER "/usr/bin/gcc") 
#SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
#SET(CMAKE_BUILD_TYPE "Debug")
#SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
#SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

#add_definitions(-DDEBUG)
#SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin") # 可执行文件输出目录
#INCLUDE_DIRECTORIES("${PROJECT_SOURCE_DIR}/include") # 头文件包含目录

#AUX_SOURCE_DIRECTORY(src DIR_SRCS) # 添加源代码文件夹, 自动扫描所有文件

add_executable(Dxq_project 
    ./main.cpp
    ./add_disp.cpp
    ./que_remv_modi.cpp
    ./save_load.cpp
 )