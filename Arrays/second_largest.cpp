#include <bits/stdc++.h>
using namespace std;

/*
    Find Second Largest Element in an Array
    ---------------------------------------
    What this code does:
    - First pass: Find the largest element in the array.
    - Second pass: Find the largest element that is not equal to the maximum.
    - If no second largest exists (all elements equal), return -1.

    Time Complexity:
    - O(n) (two passes through the array)
    Space Complexity:
    - O(1) (constant extra space)
*/

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int maxVal = INT_MIN;

        // Step 1: Find the largest element
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }

        // Step 2: Find the second largest element
        int secondLargest = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] != maxVal && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }

        // If no second largest exists, return -1
        if (secondLargest == INT_MIN) return -1;
        return secondLargest;
    }
};

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    Solution sol;

    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    int result = sol.getSecondLargest(arr);
    if (result == -1)
        cout << "No second largest element exists.\n";
    else
        cout << "Second largest element: " << result << "\n";

    return 0;
}
