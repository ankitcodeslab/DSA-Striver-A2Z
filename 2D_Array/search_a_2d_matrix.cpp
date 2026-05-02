#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to search for a target in a sorted 2D matrix
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();       // number of rows
        int n = matrix[0].size();    // number of columns

        int start = 0;
        int end = m * n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Map 1D index back to 2D coordinates
            int row = mid / n;
            int col = mid % n;

            if (matrix[row][col] == target) {
                return true;
            }
            else if (matrix[row][col] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return false;
    }
};

// Demo main function
int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 3;
    cout << "Searching for " << target << ": "
         << (sol.searchMatrix(matrix, target) ? "Found" : "Not Found") << endl;

    target = 13;
    cout << "Searching for " << target << ": "
         << (sol.searchMatrix(matrix, target) ? "Found" : "Not Found") << endl;

    return 0;
}
