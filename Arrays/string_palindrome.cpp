#include <bits/stdc++.h>
using namespace std;

/*
    Palindrome Check
    ----------------
    What this code does:
    - Checks if a given string is a palindrome.
    - A palindrome reads the same forward and backward.
    - Uses two pointers:
        start → beginning of the string
        end   → end of the string
    - Compares characters while moving inward.
    - If all pairs match, returns true; otherwise false.

    Example:
    s = "madam" → true
    s = "hello" → false

    Time Complexity:
    - O(n) (single pass through the string)
    Space Complexity:
    - O(1) (no extra space used)
*/

class Solution {
public:
    bool isPalindrome(string& s) {
        int n = s.size();
        int start = 0;
        int end = n - 1;

        // Compare characters from both ends
        while (start <= end) {
            if (s[start] != s[end]) {
                return false; // Mismatch found
            }
            start++;
            end--;
        }

        return true; // All characters matched
    }
};

int main() {
    Solution sol;
    string s1 = "madam";
    string s2 = "hello";

    cout << "String: " << s1 << " → " 
         << (sol.isPalindrome(s1) ? "Palindrome" : "Not Palindrome") << "\n";

    cout << "String: " << s2 << " → " 
         << (sol.isPalindrome(s2) ? "Palindrome" : "Not Palindrome") << "\n";

    return 0;
}
