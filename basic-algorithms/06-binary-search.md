## Problem: Binary Search (Easy)
**Link:** [LeetCode #704](https://leetcode.com/problems/binary-search/)

### Approach
Applied standard iterative binary search on a sorted ascending array. Calculated the midpoint using `left + (right - left) / 2` to prevent 32-bit signed integer overflow when bounds are large.

### Complexity
- **Time Complexity:** $O(\log N)$ logarithmic time through repetitive halving.
- **Space Complexity:** $O(1)$ constant space.

### Notes
Binary search strictly requires a pre-sorted array. Edge cases include empty vectors or single-element matches.
