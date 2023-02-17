#include "pe3_references.h"
#include <cassert>

void testIncrementPointer() {
    int x = 2;
    int *y = &x;
    F1(y);
    assert(x == 2); // F1 should not modify x
    ++*y;
    assert(x == 3); // Incrementing via pointer should modify x
}

void testIncrementReference() {
    int x = 2;
    int &ref = x;
    F2(ref);
    assert(x == 3); // Incrementing via reference should modify x
}

void testFunctionPointer() {
    int num = 0;
    time(5, &num);
    assert(num == 5);
}

void testFunctionReference() {
    int num = 0;
    int &ref = num;
    time(5, &ref);
    assert(num == 5);
}

void testFunctionConstReference() {
    int num = 0;
    const int &cref = num;
    time(5, &num);
    assert(num == 5);
}

void testMyClass() {
    MyClass obj1(5);
    MyClass obj2(7);

    assert(obj1 == obj1); // Object should equal itself
    assert(obj1 != obj2); // Objects with different values should not be equal

    MyClass obj3 = obj1 + obj2;
    assert(obj3 == MyClass(12)); // Object addition should return a new object with the correct value
}

void runTests() {
    testIncrementPointer();
    testIncrementReference();
    testFunctionPointer();
    testFunctionReference();
    testFunctionConstReference();
    testMyClass();
}

int main() {
    runTests();
    return 0;
}
