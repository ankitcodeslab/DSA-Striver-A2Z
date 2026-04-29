#include <bits/stdc++.h>
using namespace std;

/*
    Merge Two Sorted Arrays (LeetCode 88)
    -------------------------------------
    What this code does:
    - Given two sorted arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
    - nums1 has enough space (size m+n) to hold additional elements.
    - Uses three pointers:
        i → last valid element in nums1
        j → last element in nums2
        k → last position in nums1 (total size m+n-1)
    - Compares elements from the end and places the larger one at position k.
    - Continues until all elements are merged.

    Example:
    nums1 = [1,2,3,0,0,0], m = 3
    nums2 = [2,5,6], n = 3
    → Result: [1,2,2,3,5,6]

    Time Complexity:
    - O(m + n) (each element is processed once)
    Space Complexity:
    - O(1) (in-place merge, no extra space used)
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // last valid element of nums1
        int j = n - 1;      // last element of nums2
        int k = m + n - 1;  // last position of nums1

        // Merge from the back
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // Copy remaining nums2 elements (if any)
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    cout << "Original nums1: ";
    for (int x : nums1) cout << x << " ";
    cout << "\n";

    cout << "Original nums2: ";
    for (int x : nums2) cout << x << " ";
    cout << "\n";

    sol.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) cout << x << " ";
    cout << "\n";

    return 0;
}
