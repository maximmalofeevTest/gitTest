#include "someclass.h"
#include <iostream>

SomeClass::SomeClass()
{

}

void SomeClass::greeting()
{
    std::cout << "Some class greetings you" << std::endl;
}

void SomeClass::newFeature()
{
    std::cout << "This is the new feature" << std::endl;
}
