#include <bits/stdc++.h>
using namespace std;

/*
    Missing Number (LeetCode 268)
    -----------------------------
    What this code does:
    - Given an array containing n distinct numbers taken from 0, 1, 2, ..., n,
      finds the one number that is missing.
    - Uses the formula for the sum of first n natural numbers:
        total = n * (n + 1) / 2
    - Subtracts the sum of array elements from total to get the missing number.

    Example:
    nums = [3,0,1] → Result: 2
    nums = [0,1]   → Result: 2
    nums = [9,6,4,2,3,5,7,0,1] → Result: 8

    Time Complexity:
    - O(n) (single pass to compute sum)
    Space Complexity:
    - O(1) (constant extra space)
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        // Compute sum of given elements
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        // Expected sum of numbers from 0 to n
        int total = (n * (n + 1)) / 2;

        // Missing number = expected sum - actual sum
        return total - sum;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    cout << "Array 1 missing number: " << sol.missingNumber(nums1) << "\n";
    cout << "Array 2 missing number: " << sol.missingNumber(nums2) << "\n";
    cout << "Array 3 missing number: " << sol.missingNumber(nums3) << "\n";

    return 0;
}
