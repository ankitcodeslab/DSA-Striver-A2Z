#include <bits/stdc++.h>
using namespace std;

/*
    Roman to Integer (LeetCode 13)
    ------------------------------
    What this code does:
    - Converts a Roman numeral string into its integer value.
    - Uses a hash map to store Roman numeral values.
    - Traverses the string:
        - If the current numeral is smaller than the next one,
          subtract it (handles cases like IV = 4, IX = 9).
        - Otherwise, add it.

    Example:
    s = "III"   → Result: 3
    s = "IV"    → Result: 4
    s = "IX"    → Result: 9
    s = "LVIII" → Result: 58
    s = "MCMXCIV" → Result: 1994

    Time Complexity:
    - O(n) (single pass through the string)
    Space Complexity:
    - O(1) (constant extra space for hash map)
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        // Traverse the string
        for (int i = 0; i < s.size(); i++) {
            // If current value < next value, subtract it
            if (i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]]) {
                ans -= mp[s[i]];
            } else {
                ans += mp[s[i]];
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    string s1 = "III";
    string s2 = "MCMXCIV";

    cout << "Roman: " << s1 << " → Integer: " << sol.romanToInt(s1) << "\n";
    cout << "Roman: " << s2 << " → Integer: " << sol.romanToInt(s2) << "\n";

    return 0;
}
