#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;

    // Test Case 1: Target present in sorted array
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    cout << "Test 1 Output: " << solution.search(nums1, 9) << " (Expected: 4)" << endl;

    // Test Case 2: Target absent (edge case)
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    cout << "Test 2 Output: " << solution.search(nums2, 2) << " (Expected: -1)" << endl;

    return 0;
}
