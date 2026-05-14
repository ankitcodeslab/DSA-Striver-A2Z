#include <bits/stdc++.h>
using namespace std;

/*
    Longest Common Prefix (LeetCode 14)
    -----------------------------------
    What this code does:
    - Finds the longest common prefix string among an array of strings.
    - If no common prefix exists, returns an empty string "".

    Approach:
    - Start with the first string as the prefix candidate.
    - Compare it with each subsequent string:
        - While the current string does not start with the prefix,
          shrink the prefix by removing its last character.
        - Continue until prefix matches or becomes empty.
    - Return the final prefix.

    Example:
    strs = ["flower","flow","flight"]
    → Result: "fl"

    strs = ["dog","racecar","car"]
    → Result: "" (no common prefix)

    Time Complexity:
    - O(n * m) where n = number of strings, m = length of the shortest string
    Space Complexity:
    - O(1) (in-place prefix shrinking)
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Start with the first string as the prefix candidate
        string prefix = strs[0];

        // Compare prefix with each string in the array
        for (int i = 1; i < strs.size(); i++) {
            // Shrink the prefix until it matches the beginning of strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back(); // remove last character
                if (prefix.empty()) return ""; // no common prefix
            }
        }
        return prefix;
    }
};

int main() {
    Solution sol;

    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << "Input: {flower, flow, flight} → Output: "
         << sol.longestCommonPrefix(strs1) << "\n";

    cout << "Input: {dog, racecar, car} → Output: "
         << sol.longestCommonPrefix(strs2) << "\n";

    return 0;
}
