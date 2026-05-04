#include <bits/stdc++.h>
using namespace std;

/*
    Square Root using Binary Search (LeetCode 69)
    ---------------------------------------------
    What this code does:
    - Computes the integer square root of a non-negative integer `x`.
    - The integer square root is the floor value of sqrt(x).
    - Uses binary search between 0 and x to find the largest integer
      whose square is <= x.

    Example:
    x = 8 → Result: 2 (since sqrt(8) ≈ 2.82, floor = 2)
    x = 16 → Result: 4 (since sqrt(16) = 4)

    Approach:
    - Initialize search range [0, x].
    - Compute mid = (low + high) / 2.
    - If mid*mid <= x, store mid as possible answer and move right.
    - Else, move left.
    - Continue until low > high.

    Time Complexity:
    - O(log x) (binary search halves the range each step)
    Space Complexity:
    - O(1) (constant extra space)
*/

class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int ans = 1; // Default answer

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long val = mid * mid;

            if (val <= x) {
                ans = mid;      // mid is a valid candidate
                low = mid + 1;  // try to find a larger one
            } else {
                high = mid - 1; // reduce search space
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    int x1 = 8;
    int x2 = 16;

    cout << "Input: " << x1 << " → Output: " << sol.mySqrt(x1) << "\n";
    cout << "Input: " << x2 << " → Output: " << sol.mySqrt(x2) << "\n";

    return 0;
}
