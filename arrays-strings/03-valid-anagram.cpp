#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

int main() {
    Solution solution;

    // Test Case 1: Typical case
    string s1 = "anagram";
    string t1 = "nagaram";

    cout << "Test 1 Output: "
         << (solution.isAnagram(s1, t1) ? "true" : "false")
         << endl;

    // Test Case 2: Edge case - different lengths
    string s2 = "rat";
    string t2 = "car";

    cout << "Test 2 Output: "
         << (solution.isAnagram(s2, t2) ? "true" : "false")
         << endl;

    return 0;
}