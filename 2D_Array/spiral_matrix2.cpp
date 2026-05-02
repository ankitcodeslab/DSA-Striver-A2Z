#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to generate an n x n matrix filled in spiral order
    vector<vector<int>> generateMatrix(int n) {
        if (n == 0) return {};

        int top = 0, down = n - 1;
        int left = 0, right = n - 1;
        int dir = 0; // direction indicator
        int count = 1;

        /*
        dir = 0 → left to right
        dir = 1 → top to bottom
        dir = 2 → right to left
        dir = 3 → bottom to top
        */

        vector<vector<int>> matrix(n, vector<int>(n));

        while (top <= down && left <= right) {
            if (dir == 0) {
                for (int i = left; i <= right; i++) {
                    matrix[top][i] = count++;
                }
                top++;
            }
            else if (dir == 1) {
                for (int i = top; i <= down; i++) {
                    matrix[i][right] = count++;
                }
                right--;
            }
            else if (dir == 2) {
                for (int i = right; i >= left; i--) {
                    matrix[down][i] = count++;
                }
                down--;
            }
            else if (dir == 3) {
                for (int i = down; i >= top; i--) {
                    matrix[i][left] = count++;
                }
                left++;
            }
            dir = (dir + 1) % 4; // cycle direction
        }
        return matrix;
    }
};

// Demo main function
int main() {
    Solution sol;
    int n = 3;
    vector<vector<int>> mat = sol.generateMatrix(n);

    cout << "Generated " << n << "x" << n << " spiral matrix:\n";
    for (auto &row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
