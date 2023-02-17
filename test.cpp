#include <iostream>
#include <cassert>
#include "pe3_references.h"

using namespace std;

// test function for #1
void testInt() {
    int x = 2;
    assert(x == 2);
}

// test function for #2
void testPointer() {
    int x = 2;
    int *y = &x;
    assert(y == &x);
}

// test function for #3
void testIncrementPointer() {
    int x = 2;
    int *y = &x;
    F1(y);
    assert(x == 3);
}

// test function for #4
void testReference() {
    int x = 2;
    int &ref = x;
    assert(ref == x);
}

// test function for #5
void testIncrementReference() {
    int x = 2;
    int &ref = x;
    F2(ref);
    assert(x == 3);
}

// test function for #9
void testFunctionPointer() {
    int x = 2;
    int *y = &x;
    F1(y);
    assert(x == 3);
}

// test function for #11
void testFunctionReference() {
    int x = 2;
    int &ref = x;
    F2(ref);
    assert(x == 3);
}

// test function for #14
void testFunctionConstReference() {
    int input = 3;
    int output = 0;
    time(input, &output);
    assert(output == 3);
    time(input, &output);
    assert(output == 6);
    time(input, &output);
    assert(output == 9);
}

// test function for #16
void testMyClass() {
    MyClass obj1(5);
    MyClass obj2(7);
    MyClass obj3 = obj1 + obj2;
    assert((obj1 == obj2) == false);
    assert((obj1 == obj3) == true);
    assert((obj2 == obj3) == false);
}

int main() {
    testInt();
    testPointer();
    testIncrementPointer();
    testReference();
    testIncrementReference();
    testFunctionPointer();
    testFunctionReference();
    testFunctionConstReference();
    testMyClass();
    cout << "All tests passed!" << endl;
    return 0;
}
