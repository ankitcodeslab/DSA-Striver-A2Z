#include <iostream>
using namespace std;

/*
 * Function: factorial
 * -------------------
 * Calculates factorial of a number using recursion.
 *
 * n: non-negative integer
 *
 * returns: factorial of n
 */
long long factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers.");
    }
    
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    try {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
