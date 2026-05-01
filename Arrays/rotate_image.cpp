#include <bits/stdc++.h>
using namespace std;

/*
    Rotate Image (LeetCode 48)
    --------------------------
    What this code does:
    - Rotates a given n x n matrix 90 degrees clockwise.
    - Approach:
        1. Transpose the matrix (swap matrix[i][j] with matrix[j][i]).
        2. Reverse each row to complete the rotation.

    Example:
    Input:
    [
      [1,2,3],
      [4,5,6],
      [7,8,9]
    ]

    After transpose:
    [
      [1,4,7],
      [2,5,8],
      [3,6,9]
    ]

    After reversing rows:
    [
      [7,4,1],
      [8,5,2],
      [9,6,3]
    ]

    → Final rotated matrix

    Time Complexity:
    - O(n^2) (each element is visited once during transpose and reverse)
    Space Complexity:
    - O(1) (in-place, no extra space used)
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original matrix:\n";
    for (auto &row : matrix) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

    sol.rotate(matrix);

    cout << "\nRotated matrix:\n";
    for (auto &row : matrix) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
