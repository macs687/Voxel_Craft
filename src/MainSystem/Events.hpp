#pragma once


#include "Window.hpp"

#define LCM GLFW_MOUSE_BUTTON_LEFT
#define PCM GLFW_MOUSE_BUTTON_RIGHT
#define SCM GLFW_MOUSE_BUTTON_MIDDLE
#define ESC GLFW_KEY_ESCAPE


namespace MainSystem{
    class Events{
    public:
        static void initialization();
        static void destruction();
        static bool keyPress(int key);
        static bool keyPressed(int key);
        static double getCursorX(GLFWwindow *Win_ptr);
        static double getCursorY(GLFWwindow *Win_ptr);
    };
}