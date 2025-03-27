# 定义项目名称 (必须放在文件开头)
project(planning_main)

# 添加子目录构建顺序
add_subdirectory(pnc_map)    # 地图处理模块
add_subdirectory(process)    # 核心算法处理模块
add_subdirectory(show_result) # 可视化模块

# 创建主可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)

# 包含头文件目录配置
target_include_directories(${PROJECT_NAME} 
PUBLIC 
${Process_Dir}  # 算法处理模块的头文件路径
)

target_include_directories(${PROJECT_NAME} 
PUBLIC 
${Show_Result_Dir}  # 可视化模块的头文件路径
)

# 配置链接库（注意顺序：基础库在前，依赖库在后）
target_link_libraries(${PROJECT_NAME}
PUBLIC
process       # 核心算法处理库
show_result   # 可视化结果展示库
easyx         # EasyX图形库
pnc_map       # 地图处理库
)

