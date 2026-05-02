#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to compute sum of each row in a matrix
    vector<int> rowSum(vector<vector<int>>& mat) {
        int m = mat.size();       // number of rows
        int n = mat[0].size();    // number of columns
        vector<int> result;       // to store row sums

        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += mat[i][j]; // add each element of row i
            }
            result.push_back(sum); // store sum of row i
        }
        return result;
    }
};

// Demo main function
int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> sums = sol.rowSum(mat);

    cout << "Row sums: ";
    for (int s : sums) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
