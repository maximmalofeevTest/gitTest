#include "someclass.h"
#include <iostream>

SomeClass::SomeClass()
{

}

void SomeClass::greeting()
{
    std::cout << "Some class greetings you!!!" << std::endl;
}

void SomeClass::newFeature()
{
    std::cout << "This is the new awesom feature!!!" << std::endl;
}

void SomeClass::blabla()
{
    std::cout << "Bla bla bla ..." << std::endl;
}

void SomeClass::classInfo()
{
    std::cout << "This is SomeClass" << std::endl;
}
