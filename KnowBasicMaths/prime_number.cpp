// Problem: Check Prime Number
// Approach: Check divisibility up to sqrt(n)
// Time Complexity: O(√n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
};
