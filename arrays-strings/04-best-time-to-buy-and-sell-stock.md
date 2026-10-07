## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** [LeetCode #121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

### Approach
Applied a single-pass greedy technique tracking the historical minimum buying price seen so far. For each subsequent trading day, computed potential profit and maintained the maximum profit recorded.

### Complexity
- **Time Complexity:** $O(N)$ single traversal over the price vector.
- **Space Complexity:** $O(1)$ constant auxiliary memory.

### Notes
A common edge case is an array with strictly descending values (prices falling constantly); the algorithm correctly yields 0 without buying.
