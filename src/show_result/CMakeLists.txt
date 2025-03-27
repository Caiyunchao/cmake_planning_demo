# 可视化模块的独立配置
project(show_result)

# 创建静态库（避免DLL文件锁定问题）
add_library(${PROJECT_NAME}
STATIC  # 使用静态库替代共享库
show_result.cpp  # 源文件列表
)

# 配置头文件包含路径
target_include_directories(${PROJECT_NAME}
PUBLIC 
${Process_Dir}  # 需要算法处理模块的头文件
)

# 配置依赖库链接
target_link_libraries(${PROJECT_NAME}
PUBLIC
process  # 依赖核心算法处理库
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx  # 链接图形库
)

