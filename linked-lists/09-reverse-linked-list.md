## Problem: Reverse Linked List (Easy)
**Link:** [LeetCode #206](https://leetcode.com/problems/reverse-linked-list/)

### Approach
Iterative three-pointer reversal using `prev`, `curr`, and `next`. Reversed each node's pointer direction backward while marching forward along the chain until reaching the null terminal.

### Complexity
- **Time Complexity:** $O(N)$ linear single pass.
- **Space Complexity:** $O(1)$ constant auxiliary memory.

### Notes
A single-node or empty list naturally short-circuits safely, returning `nullptr` or the single node unchanged.
