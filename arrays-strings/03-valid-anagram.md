## Problem: Valid Anagram (Easy)
**Link:** [LeetCode #242](https://leetcode.com/problems/valid-anagram/)

### Approach
Verified whether two strings are anagrams by comparing their character frequency or sorting both strings. If lengths differ, they cannot be anagrams. By sorting characters lexicographically, an anagram match reduces to simple string equality.

### Complexity
- **Time Complexity:** $O(N \log N)$ using comparison sort (or $O(N)$ with a fixed 26-character frequency bucket).
- **Space Complexity:** $O(1)$ auxiliary space if sorted in place (or $O(N)$ for string copies).

### Notes
Handling Unicode characters or uppercase letters in interview settings requires standardizing input or using a hash map.
