#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }

        return maxProfit;
    }
};

int main() {
    Solution solution;

    // Test Case 1: Standard profitable price curve
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test 1 Output: " << solution.maxProfit(prices1) << " (Expected: 5)" << endl;

    // Test Case 2: Monotonically decreasing prices (edge case, zero profit)
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test 2 Output: " << solution.maxProfit(prices2) << " (Expected: 0)" << endl;

    return 0;
}
