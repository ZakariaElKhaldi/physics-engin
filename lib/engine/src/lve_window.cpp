#include "../include/lve_window.hpp"
#include <GLFW/glfw3.h>
#include <string>

namespace lve {

    LVEWindow::LVEWindow(int width,int height,std::string windowName): 
        width(width), height(height), windowName(windowName) {
            initWindow();
        }

    LVEWindow::~LVEWindow(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void LVEWindow::initWindow(){
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(
            width, 
            height,
            windowName.c_str(),
            nullptr, 
            nullptr
        );
    }

    double LVEWindow::shouldClose(){
        return glfwWindowShouldClose(window);
    }
}
