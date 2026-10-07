## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a hash map to store each number and its index while traversing the array. For every number, I calculate its complement (`target - nums[i]`) and check whether that complement has already been stored.

### Complexity

* Time: O(n)
* Space: O(n)

### Notes

The hash map allows the required pair to be found efficiently without checking every possible pair. Duplicate values such as `[3, 3]` are also handled correctly.