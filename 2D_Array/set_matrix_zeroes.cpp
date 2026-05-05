#include <bits/stdc++.h>
using namespace std;

/*
    Set Matrix Zeroes (LeetCode 73)
    -------------------------------
    What this code does:
    - Given an m x n matrix, if an element is 0, sets its entire row and column to 0.
    - Must be done in-place without using extra space proportional to matrix size.

    Approach:
    - Use the first row and first column as markers.
    - First, check if the first row or first column themselves need to be zeroed.
    - Traverse the rest of the matrix:
        - If matrix[i][j] == 0, mark matrix[i][0] and matrix[0][j] as 0.
    - Traverse again to apply markers:
        - If matrix[i][0] == 0 or matrix[0][j] == 0, set matrix[i][j] = 0.
    - Finally, handle the first row and first column separately.

    Example:
    Input:
    [
      [1,1,1],
      [1,0,1],
      [1,1,1]
    ]
    Output:
    [
      [1,0,1],
      [0,0,0],
      [1,0,1]
    ]

    Time Complexity:
    - O(m * n) (two passes through the matrix)
    Space Complexity:
    - O(1) (in-place, only marker flags used)
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool firstRowZero = false, firstColZero = false;

        // Check if first row has any zeros
        for (int j = 0; j < cols; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if first column has any zeros
        for (int i = 0; i < rows; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Use first row and column as markers
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Apply markers to set zeroes
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero) {
            for (int j = 0; j < cols; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero) {
            for (int i = 0; i < rows; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original matrix:\n";
    for (auto &row : matrix) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

    sol.setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:\n";
    for (auto &row : matrix) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
