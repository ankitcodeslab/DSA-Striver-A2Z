#include <iostream>
using namespace std;

/*
 * Function: sumFirstN
 * -------------------
 * Calculates the sum of first N natural numbers using formula:
 * n * (n + 1) / 2
 *
 * n: non-negative integer
 *
 * returns: sum of first n natural numbers
 */
long long sumFirstN(long long n) {
    if (n < 0) {
        throw invalid_argument("Input must be non-negative.");
    }

    return n * (n + 1) / 2;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    try {
        cout << "Sum of first " << n << " natural numbers is "
             << sumFirstN(n) << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
