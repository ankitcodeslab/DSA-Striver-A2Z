#include <iostream>
using namespace std;

/*
 * Function: fib
 * -------------
 * Returns the nth Fibonacci number using recursion.
 *
 * Note:
 * - This is a naive recursive approach (O(2^n))
 * - Not suitable for large n
 */
int fib(int n) {
    if (n < 0) {
        throw invalid_argument("Input must be non-negative");
    }

    if (n <= 1) return n;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    try {
        cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
