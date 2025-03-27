cmake_minimum_required(VERSION 3.31.0)
project(planning
    VERSION 0.1.0
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://gitclone.com/github.com/Caiyunchao/cmake_planning_demo"
    )

    set(CMAKE_CXX_STANDARD 11)
    #设置变量
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)  # Fixed parenthesis
    set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
    set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
   

    #添加子目录
    add_subdirectory(src)
