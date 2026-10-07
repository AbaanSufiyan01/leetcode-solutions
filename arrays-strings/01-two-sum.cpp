#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution solution;

    // Test Case 1: Typical case
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;

    vector<int> result1 = solution.twoSum(nums1, target1);

    cout << "Test 1 Output: ["
         << result1[0] << ", "
         << result1[1] << "]" << endl;

    // Test Case 2: Edge case with duplicate values
    vector<int> nums2 = {3, 3};
    int target2 = 6;

    vector<int> result2 = solution.twoSum(nums2, target2);

    cout << "Test 2 Output: ["
         << result2[0] << ", "
         << result2[1] << "]" << endl;

    return 0;
}