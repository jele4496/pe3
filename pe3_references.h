#ifndef pe3_references_H
#define pe3_references_H

void F1(int *parameter);
void F2(int &parameter2);
void time(const int &input, int *num);

class MyClass {
public:
    MyClass(int v);
    bool operator==(const MyClass& other) const;
    MyClass operator+(const MyClass& other) const;
    void printValue();
private:
    int value;
};

#endif
