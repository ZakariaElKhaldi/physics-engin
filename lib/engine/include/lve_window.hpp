#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve {

    class LVEWindow{
        private:
            GLFWwindow* window;

            const int width;
            const int height;

            std::string windowName;

            void initWindow();

        public:
            LVEWindow(int width,int height,std::string windowName);
            ~LVEWindow();


            LVEWindow(const LVEWindow &) = delete;
            LVEWindow operator&(const LVEWindow &) = delete;

            double shouldClose();
    };
}
