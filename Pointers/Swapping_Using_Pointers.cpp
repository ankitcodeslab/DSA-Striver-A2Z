#include <iostream>
using namespace std;

/*
Topic: Swapping Using Pointers
Pointers allow direct modification of variables.
*/

void swapNumbers(int* x, int* y) {
    int temp = *x;

    *x = *y;

    *y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Before Swap:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapNumbers(&a, &b);

    cout << "After Swap:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
