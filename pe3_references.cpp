#include <iostream>
#include "pe3_references.h"
// Name: Jason Lee
//

// Write any functions you need here!
using namespace std;

void F1(int *parameter)
{

}
void F2(int &parameter2){

}

void time(const int &input, int *num)
{
  *num += input;
}

class MyClass {
private:
    int value;
public:
    MyClass(int v) : value(v) {}

    bool operator==(const MyClass& other) const {
        return value == other.value;
    }

    MyClass operator+(const MyClass& other) const {
        int sum = value + other.value;
        return MyClass(sum);
    }

    void printValue() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main()
{
    // Add as many prints to cout as you need to answer the questions.
    // Leave them in your code when you turn it in.
    // If you have lines of code that cause errors that test the questions,
    // leave this code in your file but comment it out.

    // 1) Declare an int
    int x = 2;
    cout << "x value: " << x << endl;
    // 2) Declare a pointer to that int
    int *y = &x;
    cout << "y value: " << y << endl;
    // 3) Increment the int via the pointer
    ++*y;
    cout<<"Increment pointer: "<<*y<<endl<<"Increment the int: "<<x<<endl;
    // 4) Declare a reference to your int
    int &ref = x;
    cout<<"Reference to my int: "<<ref<<endl;
    // 5) Increment the int via the reference
    ref++;
    cout<<"Increment Reference: "<<"ref = " <<ref<<endl<<"x = "<<x<<endl;
    // 6) When you increment the int via the variable declared in #1, which
    // variables will be modified to see the changes? (the pointer , reference or both?)
    // Answer: The value of the int variable x will be modified.

    // 7) When you increment the int via the pointer declared in #2, which
    // variables will be modified to see the changes?
    // Answer: The value of the int variable y will be modified.

    // 8) When you increment the int via the reference declared in #4, which
    // variables will be modified to see the changes?
    // Answer: The value of the int variable ref will be modified.

    // 9) Write a function that takes an int * parameter. How would you pass the
    // variable from #1 into this function?
    // Modify the parameter within the function using any operation of your choice.(write the function definition and call below)
    // Does it update the value you originally passed to the function?
    
F1(&x);
    // Yes, it updates the value of the int variable x.

    // 10) Can you pass your reference from #4 to the function from #9 without accessing its address?
    // Answer: No, you cannot pass a reference without accessing its address.

    // 11) Write a function that takes an int & parameter. How would you pass the
    // variable from #1 into this function?
    // Modify the parameter using any operation of your choice.(write the function definition and call below)
    // Does it update the value you originally passed to the function?
  F2(x);
    // Yes, it updates the value of the int variable x.

    // 12) Can you pass your pointer from #2 to the function from #11 without dereferencing it?
    // Answer: No, you need to dereference the pointer to access the value it points to.

    // 13) Can you pass your reference from #4 to the function from #11?
    // Answer: Yes, you can pass a reference to the function.

    // 14) Write a function that takes one const reference input parameter and one pointer
    // output parameter. The function should fill in the value of the output parameter based
    // on the value of the input parameter. (what it does exactly is up to you).
    // Call your function 3 times below. Be sure to include output as necessary to be sure
    // your function works as described.

    int var = 3;
    time(1, &var);
    cout<<"Problem 14: "<<var<<endl;
    time(1, &var);
    cout<<"Problem 14: "<<var<<endl;

    // 15) What is/are the difference(s) between output parameters and return values?
    // Answer: Return values are used to return a single value from a function, while output parameters can be used to return multiple values or modify the value of a variable outside of the function.

    // 16) Create a custom class with at least one private field/class attribute. Overload the == and + operator for this class
    // such that == can be used to compare the objects of the class and + can be used to add
    // 2 objects of the class together. Implement an appropriate constructor for your class.
    // When you overload these operators, the resulting return value should make sense.
    // Instantiate at least 2 objects of this class and perform the == and + operations on them.
    // hint: for operator+, the function signature when implemented as a member function of the Object class is:
    // Object operator+(const Object &other)
    // Answer: 
    MyClass obj1(5);
    MyClass obj2(7);

    if (obj1 == obj2) {
        std::cout << "Objects are equal" << std::endl;
    } else {
        std::cout << "Objects are not equal" << std::endl;
    }

    MyClass obj3 = obj1 + obj2;
    obj3.printValue();

    return 0;
}
