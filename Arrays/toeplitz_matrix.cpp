#include <bits/stdc++.h>
using namespace std;

/*
    Toeplitz Matrix Check (LeetCode 766)
    ------------------------------------
    What this code does:
    - A matrix is Toeplitz if every diagonal from top-left to bottom-right
      has the same element.
    - This function checks each element (except first row & first column)
      against its top-left neighbor.
    - If any mismatch is found, returns false.
    - Otherwise, returns true.

    Example:
    matrix = [
      [1,2,3],
      [4,1,2],
      [5,4,1]
    ]
    → Result: true (all diagonals have same values)

    Time Complexity:
    - O(m * n) (where m = rows, n = columns)
    Space Complexity:
    - O(1) (no extra space used)
*/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Check each element against its top-left neighbor
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] != matrix[i - 1][j - 1]) {
                    return false; // Mismatch found
                }
            }
        }
        return true; // All diagonals matched
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 1, 2},
        {5, 4, 1}
    };

    vector<vector<int>> matrix2 = {
        {1, 2},
        {2, 2}
    };

    cout << "Matrix 1 is " 
         << (sol.isToeplitzMatrix(matrix1) ? "Toeplitz" : "Not Toeplitz") << "\n";

    cout << "Matrix 2 is " 
         << (sol.isToeplitzMatrix(matrix2) ? "Toeplitz" : "Not Toeplitz") << "\n";

    return 0;
}
