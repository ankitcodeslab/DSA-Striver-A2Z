#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to return elements of matrix in spiral order
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();       // number of rows
        int n = matrix[0].size();    // number of columns
        int dir = 0;                 // direction indicator

        int top = 0, down = m - 1;
        int left = 0, right = n - 1;

        /*
        dir = 0 → left to right
        dir = 1 → top to bottom
        dir = 2 → right to left
        dir = 3 → bottom to top
        */
        vector<int> result;

        while (top <= down && left <= right) {
            if (dir == 0) {
                for (int i = left; i <= right; i++) {
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            else if (dir == 1) {
                for (int i = top; i <= down; i++) {
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
            else if (dir == 2) {
                for (int i = right; i >= left; i--) {
                    result.push_back(matrix[down][i]);
                }
                down--;
            }
            else if (dir == 3) {
                for (int i = down; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir + 1) % 4; // cycle direction
        }
        return result;
    }
};

// Demo main function
int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> spiral = sol.spiralOrder(matrix);

    cout << "Spiral order: ";
    for (int val : spiral) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
