#include <iostream>
#include "pe3_references.h"
// Name: Jason Lee
//

// Write any functions you need here!
using namespace std;

void F1(int *parameter)
{

}
void F2(int &parameter2)
{

}

void time(const int &input, int *num)
{
    *num += input;
}

MyClass::MyClass(int v) : value(v) {}

bool MyClass::operator==(const MyClass &other) const
{
    return value == other.value;
}

MyClass MyClass::operator+(const MyClass &other) const
{
    int sum = value + other.value;
    return MyClass(sum);
}

void MyClass::printValue()
{
    std::cout << "Value: " << value << std::endl;
}

bool MyClass::operator!=(const MyClass &other) const
{
    return !(*this == other);
}
