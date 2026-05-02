#include "../include/app.hpp"
#include <GLFW/glfw3.h>

namespace lve {

    void App::run(){
        while (!lveWindow.shouldClose()) {
            glfwPollEvents(); 
        }
    }
}
