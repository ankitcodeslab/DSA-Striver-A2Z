#include <iostream>
using namespace std;

/*
Topic: Pointer Arithmetic
Pointers can move through memory locations.
*/

int main() {
    int arr[3] = {10, 20, 30};

    int* ptr = arr;

    cout << "First Value: " << *ptr << endl;

    ptr++;

    cout << "Second Value: " << *ptr << endl;

    ptr++;

    cout << "Third Value: " << *ptr << endl;

    return 0;
}
