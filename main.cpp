#include <iostream>
#include "someclass.h"

int main(int argc, char** argv)
{
    std::cout << "Hello from main of " << argv[0] << " with " << argc << " argc!" << std::endl;
    SomeClass someClass;
    someClass.greeting();
    std::cin.get();
	return 0;
}
