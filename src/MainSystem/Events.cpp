#include "Events.hpp"


namespace MainSystem{
    void Events::initialization(){
        std::cout << "init Events" << std::endl;
    }


    void Events::destruction(){
        std::cout << "destruct Events" << std::endl;
    }


    bool Events::keyPress(int key){
        return glfwGetKey(Window::window_ptr, key) == GLFW_PRESS;
    }


    bool Events::keyPressed(int key){
        return glfwGetKey(Window::window_ptr, key) == GLFW_REPEAT;
    }


    double Events::getCursorX(GLFWwindow *Win_ptr) {
        double xpos, ypos;
        glfwGetCursorPos(Win_ptr, &xpos, &ypos);
        return xpos;
    }


    double Events::getCursorY(GLFWwindow *Win_ptr) {
        double xpos, ypos;
        glfwGetCursorPos(Win_ptr, &xpos, &ypos);
        return ypos;
    }
}