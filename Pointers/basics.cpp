# 1. pointer_basics.cpp

```cpp id="t2n4yb"
#include <iostream>
using namespace std;

/*
Topic: Pointer Basics
Pointers store memory addresses.
*/

int main() {
    int a = 10;

    int* ptr = &a;

    cout << "Value of a: " << a << endl;

    cout << "Address of a: " << &a << endl;

    cout << "Pointer stores address: " << ptr << endl;

    return 0;
}
