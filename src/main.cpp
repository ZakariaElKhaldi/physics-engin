<<<<<<< HEAD
#include "../lib/engine/include/app.hpp"


#include <cstdlib>
#include <exception>
#include<iostream>

int main(){
    
    lve::App app{};

    try {
        app.run(); 
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n' ;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
=======
#include<iostream>

int main(){
    std::cout << "hello world";
    return 0;
>>>>>>> d6f2c0fb2a207353ba2f1f935295f7507878f35b
}
