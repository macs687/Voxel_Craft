cmake_minimum_required(VERSION 3.29.2 FATAL_ERROR)


project(Voxel_Craft)


add_executable(${PROJECT_NAME}
    src/engine.cpp
    src/Main_app.hpp
    src/Main_app.cpp
    src/MainSystem/Window.hpp
    src/MainSystem/Window.cpp
    src/MainSystem/Events.hpp
    src/MainSystem/Events.cpp
    src/GraphicsSystem/Shader.hpp
    src/GraphicsSystem/Shader.cpp
)


add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} PRIVATE glad)


add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)


set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})