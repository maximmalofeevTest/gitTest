#include <iostream>
#include "someclass.h"

int main(int argc, char** argv)
{
    std::cout << "==v1.1==" << std::endl;
	std::cout << "F2 feature" << std::endl;
	std::cout << "F2 second feature" << std::endl;
    std::cout << "Hello from main of " << argv[0] << " with " << argc << " argc:" << std::endl;
    for(auto i = 1; i <= argc; i++){
        std::cout << "#" << i << " = " << argv[i] << std::endl;
    }
    SomeClass someClass;
    someClass.greeting();
    std::cout << "Press some key to exit" << std::endl;
    std::cin.get();
	std::cout << "Common for f1 & f2" << std::endl;
	std::cout << "Only f1 feature" << std::endl;
	return 0;
}
