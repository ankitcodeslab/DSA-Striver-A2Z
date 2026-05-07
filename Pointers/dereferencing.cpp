#include <iostream>
using namespace std;

/*
Topic: Dereferencing
*ptr gives the value stored at the address.
*/

int main() {
    int a = 25;

    int* ptr = &a;

    cout << "Value using variable: " << a << endl;

    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
