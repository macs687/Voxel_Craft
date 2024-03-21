cmake_minimum_required(VERSION 3.28.3 FATAL_ERROR)

project(Voxel_Craft)


add_executable(${PROJECT_NAME}
    src/engine.cpp
)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)





set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})