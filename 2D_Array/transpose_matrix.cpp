#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to compute the transpose of a matrix
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();       // number of rows
        int n = matrix[0].size();    // number of columns

        // Transposed matrix will have dimensions n x m
        vector<vector<int>> result(n, vector<int>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[j][i] = matrix[i][j]; // swap row and column
            }
        }
        return result;
    }
};

// Demo main function
int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> transposed = sol.transpose(matrix);

    cout << "Transposed matrix:\n";
    for (auto &row : transposed) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
