#include <bits/stdc++.h>
using namespace std;

/*
    Move Zeroes in an Array
    -----------------------
    What this code does:
    - Rearranges the array so that all non-zero elements retain their relative order.
    - Moves all zero elements to the end of the array.
    - Achieves this in-place using a two-pointer approach.

    Approach:
    - Use pointer `i` to track the position where the next non-zero should be placed.
    - Traverse with pointer `j`:
        - If nums[j] is non-zero, swap it with nums[i] and increment i.
    - This ensures non-zero elements are shifted forward while zeros accumulate at the end.

    Example:
    nums = [0,1,0,3,12] → [1,3,12,0,0]

    Time Complexity:
    - O(n) (single pass through the array)
    Space Complexity:
    - O(1) (in-place, no extra space used)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // Position for next non-zero
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0, 1, 0, 3, 12};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    sol.moveZeroes(arr);

    cout << "Array after moving zeroes: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
