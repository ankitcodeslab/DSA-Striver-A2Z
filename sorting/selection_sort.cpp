#include <bits/stdc++.h>
using namespace std;

/*
    Selection Sort Algorithm
    ------------------------
    What this code does:
    - Iterates through the array
    - Finds the minimum element in the unsorted part
    - Swaps it with the first element of the unsorted part
    - Repeats until the entire array is sorted

    Time Complexity:
    - Best Case:   O(n^2)   (no matter the input, we always scan the unsorted part)
    - Worst Case:  O(n^2)
    - Average:     O(n^2)
    Space Complexity:
    - O(1) (in-place sorting, no extra space required)
*/

// Function to perform Selection Sort
void selectionSort(vector<int>& arr, int n) {   
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume current index has the minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update minIndex if smaller element found
            }
        }
        swap(arr[minIndex], arr[i]); // Place the minimum at the correct position
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
