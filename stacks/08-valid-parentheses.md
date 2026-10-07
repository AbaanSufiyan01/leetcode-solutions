## Problem: Valid Parentheses (Easy)
**Link:** [LeetCode #20](https://leetcode.com/problems/valid-parentheses/)

### Approach
Used a LIFO stack to validate bracket syntax. Pushed every opening bracket `(`, `{`, `[` onto the stack. On encountering any closing bracket, verified the top element matches the corresponding pair, popping it if valid.

### Complexity
- **Time Complexity:** $O(N)$ single linear pass through string length.
- **Space Complexity:** $O(N)$ worst-case auxiliary space when all characters are opening brackets.

### Notes
An odd string length cannot be balanced, allowing an early $O(1)$ return check.
