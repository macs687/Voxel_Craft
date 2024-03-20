cmake_minimum_required(VERSION 3.27.8 FATAL_ERROR)

set(PROJECT_NAME Minecraft_OpenGL)
project(${PROJECT_NAME})

find_package(OpenGL REQUIRED)

add_executable(${PROJECT_NAME}
    src/engine.cpp
    src/Main_app.cpp
    src/Main_app.hpp
    src/MainSystem/Window.hpp
    src/MainSystem/Window.cpp
    src/MainSystem/Events.hpp
    src/MainSystem/Events.cpp
    src/GraphicsSystem/Shader.hpp
    src/GraphicsSystem/Shader.cpp
    src/GraphicsSystem/Texture.hpp
    src/GraphicsSystem/Texture.cpp
)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)

add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} PRIVATE glad)

target_compile_options(${PROJECT_NAME} PRIVATE -g)