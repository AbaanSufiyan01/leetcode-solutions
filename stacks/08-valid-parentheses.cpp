#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) return false;

        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if (ch == ')' && top != '(') return false;
                if (ch == '}' && top != '{') return false;
                if (ch == ']' && top != '[') return false;
            }
        }

        return st.empty();
    }
};

int main() {
    Solution solution;

    // Test Case 1: Properly nested balanced brackets
    string s1 = "()[]{}";
    cout << "Test 1 Output: " << (solution.isValid(s1) ? "true" : "false") << " (Expected: true)" << endl;

    // Test Case 2: Mismatched closing bracket (edge case)
    string s2 = "(]";
    cout << "Test 2 Output: " << (solution.isValid(s2) ? "true" : "false") << " (Expected: false)" << endl;

    return 0;
}
