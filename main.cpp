#include <iostream>
#include "someclass.h"

int main(int argc, char** argv)
{
    std::cout << "Hello from main of " << argv[0] << " with " << argc << " argc:" << std::endl;
    for(auto i = 1; i <= argc; i++){
        std::cout << argv[i] << std::endl;
    }
    SomeClass someClass;
    someClass.greeting();
    std::cout << "Press some key to exit" << std::endl;
    std::cin.get();
	return 0;
}
