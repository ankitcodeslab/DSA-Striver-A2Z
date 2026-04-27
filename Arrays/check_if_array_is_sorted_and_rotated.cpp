#include <bits/stdc++.h>
using namespace std;

/*
    Check if Array is Sorted and Rotated
    ------------------------------------
    What this code does:
    - Iterates through the array to count how many times the order breaks (nums[i-1] > nums[i]).
    - Also checks the last element with the first element (nums[n-1] > nums[0]).
    - If the count of such "breaks" is more than 1, the array cannot be sorted and rotated.
    - Otherwise, it is valid.

    Example:
    nums = [3,4,5,1,2] → Sorted and rotated
    nums = [1,2,3,4,5] → Sorted (rotation not needed, still valid)
    nums = [2,1,3,4]   → Not valid

    Time Complexity:
    - O(n) (single pass through the array)
    Space Complexity:
    - O(1) (constant extra space)
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        // Count breaks in sorted order
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }

        // Check last element with first element
        if (nums[n - 1] > nums[0]) {
            count++;
        }

        // Valid if at most one break
        return count <= 1;
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {3, 4, 5, 1, 2};
    vector<int> arr2 = {1, 2, 3, 4, 5};
    vector<int> arr3 = {2, 1, 3, 4};

    cout << "Array 1: " << (sol.check(arr1) ? "Valid" : "Not valid") << "\n";
    cout << "Array 2: " << (sol.check(arr2) ? "Valid" : "Not valid") << "\n";
    cout << "Array 3: " << (sol.check(arr3) ? "Valid" : "Not valid") << "\n";

    return 0;
}
