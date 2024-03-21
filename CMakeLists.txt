cmake_minimum_required(VERSION 3.28.3 FATAL_ERROR)

set(PROJECT_NAME Voxel_Craft)
project(${PROJECT_NAME})


add_executable(${PROJECT_NAME}
    src/engine.cpp
)







set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})