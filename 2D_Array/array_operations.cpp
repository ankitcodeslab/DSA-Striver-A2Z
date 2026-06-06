// 🔗 Topic: 2D Array Operations in C++
// Includes: Row with Max Sum, Wave Traversal

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

// Function to print the row index with maximum sum
void printRowMax(int arr[][4], int row, int col) {
    int index = -1;
    int sum = INT_MIN;

    for (int i = 0; i < row; i++) {
        int total = 0;
        for (int j = 0; j < col; j++) {
            total += arr[i][j];
        }
        if (total > sum) {
            sum = total;
            index = i;
        }
    }
    cout << "Row with maximum sum: " << index << endl;
}

// Function to print matrix in wave form (column-wise zigzag)
void wave(int arr[][4], int row, int col) {
    cout << "Wave Traversal: ";
    for (int j = 0; j < col; j++) {
        if (j % 2 == 0) {
            // top to bottom
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // bottom to top
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    // Create 2D arrays
    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int arr2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print row with maximum sum
    printRowMax(arr2, 3, 4);

    // Print wave traversal
    wave(arr1, 3, 4);

    return 0;
}
