## Problem: Longest Common Prefix (Easy)
**Link:** [LeetCode #14](https://leetcode.com/problems/longest-common-prefix/)

### Approach
Used horizontal prefix scanning. Set the initial prefix equal to the first string in the list, then iteratively trimmed characters off the end until it matches the prefix of every subsequent string.

### Complexity
- **Time Complexity:** $O(S)$ where $S$ is the sum of characters across all strings.
- **Space Complexity:** $O(1)$ auxiliary memory (ignoring the output prefix string).

### Notes
If any string has zero characters in common at the start, the prefix collapses to `""` immediately, triggering early exit.
