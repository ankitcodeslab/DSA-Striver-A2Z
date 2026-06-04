// 🔗 Topic: First Bad Version (Binary Search) - LeetCode 278

#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    // Function to find the first bad version using binary search
    int firstBadVersion(int n) {
        long int low = 1;
        long int high = n;
        long int result = n;

        while (low <= high) {
            long int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                // If mid is bad, it could be the first bad version
                result = mid;
                high = mid - 1; // search left side
            } else {
                // If mid is good, search right side
                low = mid + 1;
            }
        }
        return result;
    }
};

/*
Driver code is not required here since LeetCode provides
the `isBadVersion` API and handles input/output.
But for local testing, you could mock isBadVersion like this:

bool isBadVersion(int version) {
    int firstBad = 4; // Example: version 4 is the first bad one
    return version >= firstBad;
}

int main() {
    Solution sol;
    cout << "First Bad Version: " << sol.firstBadVersion(10) << endl;
    return 0;
}
*/

