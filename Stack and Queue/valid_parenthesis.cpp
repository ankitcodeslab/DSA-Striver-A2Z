// 📌 Topic: Valid Parentheses Problem (LeetCode #20)
// Approach: Stack-based matching of brackets in C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char &ch : s) {
            // Push opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                // If stack is empty, no matching opening bracket
                if (st.empty()) return false;

                // Check for matching pair
                if ((ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false; // mismatch found
                }
            }
        }
        // Valid if stack is empty at the end
        return st.empty();
    }
};

// Example usage
int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isValid("()") << endl;       // true
    cout << sol.isValid("()[]{}") << endl;   // true
    cout << sol.isValid("(]") << endl;       // false
    cout << sol.isValid("([)]") << endl;     // false
    cout << sol.isValid("{[]}") << endl;     // true
    return 0;
}
