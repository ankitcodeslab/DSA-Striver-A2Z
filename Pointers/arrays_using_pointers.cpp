#include <iostream>
using namespace std;

/*
Topic: Arrays Using Pointers
Array name itself acts like a pointer.
*/

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int* ptr = arr;

    cout << "Array Elements: ";

    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
