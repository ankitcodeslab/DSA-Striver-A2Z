// Problem: Armstrong Number
// Approach:
// 1. Count digits
// 2. Raise each digit to that power
// Time: O(d)
// Space: O(1)

class Solution {
public:
    bool armstrongNumber(int n) {
        int dup = n;

        // count digits
        int digits = 0;
        int temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        int sum = 0;
        temp = n;

        while (temp > 0) {
            int lastdigit = temp % 10;

            // manual power (safer than pow)
            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= lastdigit;
            }

            sum += power;
            temp /= 10;
        }

        return sum == dup;
    }
};
