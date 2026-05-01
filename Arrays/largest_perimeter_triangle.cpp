#include <bits/stdc++.h>
using namespace std;

/*
    Largest Perimeter Triangle (LeetCode 976)
    -----------------------------------------
    What this code does:
    - Given an array of side lengths, finds the largest perimeter of a triangle
      that can be formed using any three sides.
    - Sorts the array in ascending order.
    - Starting from the largest three sides, checks if they satisfy the triangle inequality:
        nums[i] + nums[i+1] > nums[i+2]
    - If valid, returns their perimeter.
    - If no valid triangle exists, returns 0.

    Example:
    nums = [2,1,2] → Result: 5 (triangle sides 1,2,2)
    nums = [1,2,1] → Result: 0 (no valid triangle)

    Time Complexity:
    - O(n log n) (due to sorting)
    Space Complexity:
    - O(1) (in-place sorting, no extra space used)
*/

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums)); // Sort sides in ascending order

        // Check from largest sides backwards
        for (int i = n - 3; i >= 0; i--) {
            if (nums[i] + nums[i + 1] > nums[i + 2]) {
                return nums[i] + nums[i + 1] + nums[i + 2]; // Valid triangle perimeter
            }
        }
        return 0; // No valid triangle
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {2, 1, 2};
    vector<int> nums2 = {1, 2, 1};

    cout << "Array 1 result: " << sol.largestPerimeter(nums1) << "\n";
    cout << "Array 2 result: " << sol.largestPerimeter(nums2) << "\n";

    return 0;
}
