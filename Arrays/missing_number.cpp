#include <bits/stdc++.h>
using namespace std;

/*
    Rotate Array by k Steps (LeetCode 189)
    --------------------------------------
    What this code does:
    - Rotates the array to the right by `k` positions.
    - Uses a temporary array to store rotated positions.
    - Each element at index `i` moves to `(i + k) % n`.

    Example:
    nums = [1,2,3,4,5,6,7], k = 3
    → Result: [5,6,7,1,2,3,4]

    Time Complexity:
    - O(n) (single pass through the array)
    Space Complexity:
    - O(n) (extra temporary array used)
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);

        // Place each element at its rotated position
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }

        // Copy back to original array
        nums = temp;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    sol.rotate(nums, k);

    cout << "Array after rotating by " << k << " steps: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    return 0;
}
