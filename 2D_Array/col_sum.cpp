#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to compute sum of each column in a matrix
    vector<int> colSum(vector<vector<int>>& mat) {
        int m = mat.size();       // number of rows
        int n = mat[0].size();    // number of columns
        vector<int> result;       // to store column sums

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += mat[j][i]; // add element from row j, column i
            }
            result.push_back(sum); // store sum of column i
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

    vector<int> sums = sol.colSum(mat);

    cout << "Column sums: ";
    for (int s : sums) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
