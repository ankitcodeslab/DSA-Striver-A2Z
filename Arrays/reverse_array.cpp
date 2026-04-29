#include <bits/stdc++.h>
using namespace std;

/*
    Reverse Array from Index m+1 to End
    -----------------------------------
    What this code does:
    - Takes an array and an index `m`.
    - Reverses the portion of the array starting from index `m+1` up to the last element.
    - Leaves the first `m+1` elements unchanged.

    Example:
    arr = [1, 2, 3, 4, 5, 6], m = 2
    → Reverse from index 3 to end
    → Result: [1, 2, 3, 6, 5, 4]

    Time Complexity:
    - O(n - m) ≈ O(n) (depends on how many elements are reversed)
    Space Complexity:
    - O(1) (in-place, no extra space used)
*/

// Function to reverse array elements from index m+1 to end
void reverseArray(vector<int> &arr, int m) {
    int n = arr.size();
    int start = m + 1;   // Start reversing after index m
    int end = n - 1;     // Last index

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 2;

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    reverseArray(arr, m);

    cout << "Array after reversing from index " << m+1 << " to end: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
