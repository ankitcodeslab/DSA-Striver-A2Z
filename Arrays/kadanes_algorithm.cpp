#include <bits/stdc++.h>
using namespace std;

/*
    Maximum Subarray (Kadane's Algorithm) - LeetCode 53
    ---------------------------------------------------
    What this code does:
    - Finds the contiguous subarray within a one-dimensional array of numbers
      which has the largest sum.
    - Uses Kadane’s Algorithm:
        1. Maintain a running sum (cs).
        2. Update maxsum whenever cs is greater.
        3. If cs becomes negative, reset it to 0 (since a negative sum will not
           contribute to a maximum subarray).

    Example:
    nums = [-2,1,-3,4,-1,2,1,-5,4]
    → Result: 6 (subarray [4,-1,2,1])

    Time Complexity:
    - O(n) (single pass through the array)
    Space Complexity:
    - O(1) (constant extra space)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = INT_MIN; // Initialize to smallest possible integer
        int cs = 0;           // Current sum

        for (int i = 0; i < n; i++) {
            cs += nums[i];                // Add current element
            maxsum = max(cs, maxsum);     // Update maximum sum
            if (cs < 0) cs = 0;           // Reset if sum becomes negative
        }
        return maxsum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Array: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums) << "\n";

    return 0;
}
