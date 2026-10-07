#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPos++] = nums[i];
            }
        }

        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};

void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 < v.size() ? ", " : "");
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;

    // Test Case 1: Mixed array of zeros and non-zeros
    vector<int> nums1 = {0, 1, 0, 3, 12};
    solution.moveZeroes(nums1);
    cout << "Test 1 Output: ";
    printVector(nums1); // Expected: [1, 3, 12, 0, 0]

    // Test Case 2: Array with only zeros (edge case)
    vector<int> nums2 = {0, 0};
    solution.moveZeroes(nums2);
    cout << "Test 2 Output: ";
    printVector(nums2); // Expected: [0, 0]

    return 0;
}
