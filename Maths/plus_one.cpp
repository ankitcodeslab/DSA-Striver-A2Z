#include <bits/stdc++.h>
using namespace std;

/*
    Plus One (LeetCode 66)
    ----------------------
    What this code does:
    - Given a non-empty array of digits representing a non-negative integer,
      increments the integer by one.
    - Handles carry-over when digits[i] == 9.
    - If all digits are 9 (e.g., 999), creates a new array with one extra digit.

    Example:
    digits = [1,2,3] → Result: [1,2,4]
    digits = [9,9,9] → Result: [1,0,0,0]

    Time Complexity:
    - O(n) (single pass from right to left)
    Space Complexity:
    - O(1) if modifying in place, O(n+1) in worst case (when all digits are 9)
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse from last digit backwards
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // No carry needed
                return digits;
            }
            digits[i] = 0;     // Carry over
        }

        // If all digits were 9, create new array [1,0,0,...,0]
        vector<int> result(n + 1, 0);
        result[0] = 1;
        return result;
    }
};

int main() {
    Solution sol;

    vector<int> digits1 = {1, 2, 3};
    vector<int> digits2 = {9, 9, 9};

    auto res1 = sol.plusOne(digits1);
    auto res2 = sol.plusOne(digits2);

    cout << "Input: [1,2,3] → Output: ";
    for (int d : res1) cout << d << " ";
    cout << "\n";

    cout << "Input: [9,9,9] → Output: ";
    for (int d : res2) cout << d << " ";
    cout << "\n";

    return 0;
}
