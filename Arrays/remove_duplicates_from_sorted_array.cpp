#include <bits/stdc++.h>
using namespace std;

/*
    Remove Duplicates from Sorted Array (LeetCode 26)
    -------------------------------------------------
    What this code does:
    - Given a sorted array, removes duplicates in-place.
    - Returns the new length of the array after duplicates are removed.
    - Ensures each element appears only once.
    - The relative order of elements is maintained.

    Approach:
    - Use two pointers:
        i → slow pointer (tracks position of unique elements)
        j → fast pointer (scans through the array)
    - Whenever nums[j] != nums[i], increment i and copy nums[j] to nums[i].
    - At the end, i+1 gives the count of unique elements.

    Example:
    nums = [1,1,2]
    → Result length = 2, array becomes [1,2]

    nums = [0,0,1,1,1,2,2,3,3,4]
    → Result length = 5, array becomes [0,1,2,3,4]

    Time Complexity:
    - O(n) (single pass through the array)
    Space Complexity:
    - O(1) (in-place, no extra space used)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;

        int i = 0; // slow pointer

        for (int j = 1; j < n; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j]; // place unique element
            }
        }

        return i + 1; // length of unique array
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {0,0,1,1,1,2,2,3,3,4};

    int len1 = sol.removeDuplicates(nums1);
    int len2 = sol.removeDuplicates(nums2);

    cout << "Array 1 new length: " << len1 << " → ";
    for (int i = 0; i < len1; i++) cout << nums1[i] << " ";
    cout << "\n";

    cout << "Array 2 new length: " << len2 << " → ";
    for (int i = 0; i < len2; i++) cout << nums2[i] << " ";
    cout << "\n";

    return 0;
}
