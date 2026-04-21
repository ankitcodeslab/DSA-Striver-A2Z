// Problem: Reverse Integer (LeetCode)
// Approach: Digit extraction with overflow check before multiplication
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int lastdigit = x % 10;
            x /= 10;

            // Check overflow BEFORE updating rev
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;

            rev = rev * 10 + lastdigit;
        }

        return rev;
    }
};
