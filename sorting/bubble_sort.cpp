#include <bits/stdc++.h>
using namespace std;

/*
    Bubble Sort Algorithm
    ---------------------
    What this code does:
    - Repeatedly compares adjacent elements
    - Swaps them if they are in the wrong order
    - After each pass, the largest element "bubbles up" to its correct position
    - Stops early if no swaps occur (optimization)

    Time Complexity:
    - Best Case:   O(n)     (when the array is already sorted, thanks to the swapped flag)
    - Worst Case:  O(n^2)   (when the array is sorted in reverse order)
    - Average:     O(n^2)
    Space Complexity:
    - O(1) (in-place sorting, no extra space required)
*/

// Function to perform Bubble Sort
void bubbleSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        bool swapped = false;  // Track if any swap happens in this pass
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no swaps occurred, array is already sorted → break early
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
