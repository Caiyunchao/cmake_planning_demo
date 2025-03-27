cmake_minimum_required(VERSION 3.31.0)
project(planning
    VERSION 0.1.0
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://gitclone.com/github.com/Caiyunchao/cmake_planning_demo"
    )

# 设置 C++ 标准版本
set(CMAKE_CXX_STANDARD 11)

# 设置项目路径变量
# 设置可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
# 设置运行时文件输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
# 设置各模块源码目录
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_Result_Dir ${CMAKE_SOURCE_DIR}/src/show_result)

# Replace Eigen3 find_package with direct include
set(EIGEN3_INCLUDE_DIR "F:/programe/eigen-3.4.0")
include_directories(${EIGEN3_INCLUDE_DIR})

# 删除以下无效配置
# list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmkae")
# find_package(Eigen3  REQUIRED)
# if(TARGET Eigen3::Eigen)
#     message("FindEigen3 3.4 found: ${Eigen3_INCLUDE_DIRS}")
# endif()
# 配置头文件包含路径
include_directories(${EIGEN3_INCLUDE_DIRS})

# 添加子目录构建
# 包含 src 目录下的子项目
add_subdirectory(src)