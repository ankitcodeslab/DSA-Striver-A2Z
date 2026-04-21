// Problem: Armstrong Number
// Approach: Count digits, then sum digits raised to that power
// Time Complexity: O(d)
// Space Complexity: O(1)

class Solution {
public:
    bool armstrongNumber(int n) {
        int dup = n;
        int digits = 0;
        int temp = n;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        int sum = 0;
        temp = n;

        while (temp > 0) {
            int lastdigit = temp % 10;
            sum += pow(lastdigit, digits);
            temp /= 10;
        }

        return sum == dup;
    }
};
