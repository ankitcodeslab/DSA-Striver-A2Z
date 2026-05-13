/*
 * Title: Dynamic Memory Allocation in C++
 * Author: Ankit
 * Description:
 *   Demonstrates dynamic memory allocation using 'new' and 'delete'
 *   for single variables, 1D arrays, and 2D arrays in C++.
 *
 * Time Complexity:
 *   - Allocation: O(1) for single variable, O(n) for 1D array, O(n*m) for 2D array
 *   - Deallocation: O(1) for single variable, O(n) for 1D array, O(n*m) for 2D array
 * Space Complexity:
 *   - O(n) for 1D array
 *   - O(n*m) for 2D array
 */

#include <iostream>
using namespace std;

int main() {
    // --- Single integer allocation ---
    int* ptr = new int;
    *ptr = 42;
    cout << "Value stored in dynamically allocated int: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;

    // --- 1D array allocation ---
    int n;
    cout << "Enter size of 1D array: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    cout << "1D Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    arr = nullptr;

    // --- 2D array allocation ---
    int rows, cols;
    cout << "Enter rows and columns for 2D array: ";
    cin >> rows >> cols;

    // Allocate memory for array of pointers
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Initialize matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (i + 1) * (j + 1);  // Example initialization
        }
    }

    // Print matrix
    cout << "2D Array elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;

    return 0;
}
