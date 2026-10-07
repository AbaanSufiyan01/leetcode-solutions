#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

int main() {
    Solution solution;

    // Test Case 1: Standard common prefix present
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Test 1 Output: \"" << solution.longestCommonPrefix(strs1) << "\" (Expected: \"fl\")" << endl;

    // Test Case 2: No common prefix (edge case)
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Test 2 Output: \"" << solution.longestCommonPrefix(strs2) << "\" (Expected: \"\")" << endl;

    return 0;
}
