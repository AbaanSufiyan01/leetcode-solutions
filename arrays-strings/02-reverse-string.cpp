#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};

    solution.reverseString(s1);

    cout << "Test 1 Output: ";
    for (char c : s1) {
        cout << c;
    }
    cout << endl;

    // Test Case 2
    vector<char> s2 = {'a'};

    solution.reverseString(s2);

    cout << "Test 2 Output: ";
    for (char c : s2) {
        cout << c;
    }
    cout << endl;

    return 0;
}