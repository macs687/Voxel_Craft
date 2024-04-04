#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


namespace MainSystem{
    class Window{
    public:
        static void initialization(int WIDTH, int HEIGHT, const char* title);
        static void destructor(GLFWwindow* Win_ptr);

        Window(const Window &) = delete;
        Window &operator=(const Window &) = delete;

        static GLFWwindow* window_ptr;
        const int width;
        const int height;
        static void terminate();
        static void pollEvents();
        static void swapBuffers(GLFWwindow* Win_ptr);
        static bool isOpen(GLFWwindow* Win_ptr);
        static void close(GLFWwindow* Win_ptr);
        static void ClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
        static void Clear();
    private:
        const char* windowName;
    };
}