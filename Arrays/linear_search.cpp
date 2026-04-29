#include <bits/stdc++.h>
using namespace std;

/*
    Linear Search Algorithm
    -----------------------
    What this code does:
    - Iterates through the array sequentially.
    - Compares each element with the target value `x`.
    - If found, returns the index of the element.
    - If not found, returns -1.

    Example:
    arr = [10, 20, 30, 40, 50], x = 30
    → Result: 2 (index of 30)

    Time Complexity:
    - Best Case:   O(1)   (target found at the first element)
    - Worst Case:  O(n)   (target not found or at the last element)
    - Average:     O(n)
    Space Complexity:
    - O(1) (no extra space used)
*/

class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();

        // Traverse the array
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                return i; // Return index if found
            }
        }

        // If not found, return -1
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {10, 20, 30, 40, 50};
    int x = 30;

    cout << "Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    int result = sol.search(arr, x);

    if (result != -1)
        cout << "Element " << x << " found at index " << result << "\n";
    else
        cout << "Element " << x << " not found in array\n";

    return 0;
}
