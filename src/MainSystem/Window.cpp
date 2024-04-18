#include "Window.hpp"


namespace MainSystem{
    GLFWwindow* MainSystem::Window::window_ptr;


    void Window::initialization(const int WIDTH, const int HEIGHT, const char* title){
        if (!glfwInit()){
            std::cout << "glfwInit failed!" << std::endl;
            terminate();
        }

        MainSystem::Window::window_ptr = glfwCreateWindow(WIDTH, HEIGHT, title, nullptr, nullptr);
        if (MainSystem::Window::window_ptr == nullptr){
            std::cout << "glfwCreateWindow failed!" << std::endl;
            terminate();
        }

        glfwMakeContextCurrent(MainSystem::Window::window_ptr);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
            std::cout << "glad not load" << std::endl;
            terminate();
        }

        std::cout << "Renderer: " << glGetString(GL_RENDERER) << std::endl;
        std::cout << "OpenGL version: " << glGetString(GL_VERSION) << std::endl;
    };


    void Window::destructor(GLFWwindow* Win_ptr){
        glfwDestroyWindow(Win_ptr);
        terminate();
    };
    

    void Window::terminate(){
        glfwTerminate();
    }


    void Window::pollEvents(){
        glfwPollEvents();
    }


    void Window::swapBuffers(GLFWwindow* Win_ptr){
        glfwSwapBuffers(Win_ptr);
    }


    bool Window::isOpen(GLFWwindow* Win_ptr){
        if(glfwWindowShouldClose(Win_ptr)){
            std::cout << "окно открыто" << std::endl;
            return true;
        }else{
            return false;
            std::cout << "окно закрыто" << std::endl;
        }
    }


    void Window::close(GLFWwindow* Win_ptr){
        glfwSetWindowShouldClose(Win_ptr, GLFW_TRUE);
    }


    void Window::ClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha){
        glClearColor(red, green, blue, alpha);
    }


    void Window::Clear(){
        glClear(GL_COLOR_BUFFER_BIT);
    }
}