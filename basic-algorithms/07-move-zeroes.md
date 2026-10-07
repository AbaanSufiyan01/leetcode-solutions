## Problem: Move Zeroes (Easy)
**Link:** [LeetCode #283](https://leetcode.com/problems/move-zeroes/)

### Approach
Used a two-pointer write-head approach. Walked through the vector writing all non-zero elements to the front sequentially, then padded all remaining trailing elements with zeros in-place.

### Complexity
- **Time Complexity:** $O(N)$ linear time with two linear passes.
- **Space Complexity:** $O(1)$ strictly in-place modification.

### Notes
Avoided auxiliary vector allocations, fulfilling the in-place problem constraint while preserving relative ordering of all non-zero elements.
