#include <bits/stdc++.h>
using namespace std;

/*
    Rotate Array by One Place
    -------------------------
    What this code does:
    - Rotates the array to the right by one position.
    - Stores the last element temporarily.
    - Shifts all other elements one step to the right.
    - Places the last element at the first position.

    Example:
    arr = [1, 2, 3, 4, 5]
    → Result: [5, 1, 2, 3, 4]

    Time Complexity:
    - O(n) (single pass through the array)
    Space Complexity:
    - O(1) (in-place, no extra space used)
*/

class Solution {
public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int last = arr[n - 1]; // Store last element

        // Shift elements to the right
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        // Place last element at the front
        arr[0] = last;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    sol.rotate(arr);

    cout << "Array after rotating by one place: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
