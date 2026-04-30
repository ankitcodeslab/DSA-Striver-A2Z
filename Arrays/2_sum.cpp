#include <bits/stdc++.h>
using namespace std;

/*
    Two Sum Problem (LeetCode 1)
    ----------------------------
    What this code does:
    - Given an array of integers `nums` and an integer `target`,
      finds two distinct indices i and j such that nums[i] + nums[j] == target.
    - Returns the pair of indices if found, otherwise returns an empty vector.

    Approach:
    - Brute force: Check all pairs using nested loops.
    - If a pair sums to target, return their indices immediately.
    - If no pair exists, return an empty vector.

    Example:
    nums = [2,7,11,15], target = 9
    → Result: [0,1] (because nums[0] + nums[1] = 2 + 7 = 9)

    Time Complexity:
    - O(n^2) (nested loops check all pairs)
    Space Complexity:
    - O(1) (no extra space used)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        // Check all pairs
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return indices if found
                }
            }
        }

        // If no pair found
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    cout << "Array: ";
    for (int x : nums) cout << x << " ";
    cout << "\nTarget: " << target << "\n";

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty())
        cout << "Indices found: " << result[0] << ", " << result[1] << "\n";
    else
        cout << "No valid pair found.\n";

    return 0;
}
