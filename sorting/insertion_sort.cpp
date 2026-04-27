#include <bits/stdc++.h>
using namespace std;

/*
    Insertion Sort Algorithm
    ------------------------
    What this code does:
    - Builds a sorted portion of the array one element at a time.
    - For each element, it finds the correct position in the already sorted part.
    - Shifts larger elements to the right to make space.
    - Inserts the current element into its correct position.

    Time Complexity:
    - Best Case:   O(n)     (array already sorted → only one comparison per element)
    - Worst Case:  O(n^2)   (array sorted in reverse order → maximum shifts required)
    - Average:     O(n^2)
    Space Complexity:
    - O(1) (in-place sorting, no extra space required)
*/

class Solution {
public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int temp = arr[i];   // Current element to insert
            int j = i - 1;

            // Shift elements greater than temp to the right
            for (; j >= 0; j--) {
                if (arr[j] > temp) {
                    arr[j + 1] = arr[j];
                } else {
                    break; // Found correct position
                }
            }
            arr[j + 1] = temp; // Insert element at correct position
        }
    }
};

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    Solution sol;

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    sol.insertionSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
