#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};

void printList(ListNode* head) {
    cout << "[";
    while (head != nullptr) {
        cout << head->val << (head->next ? " -> " : "");
        head = head->next;
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;

    // Test Case 1: Standard multi-node list 1 -> 2 -> 3
    ListNode* n1 = new ListNode(1);
    n1->next = new ListNode(2);
    n1->next->next = new ListNode(3);

    cout << "Original List: ";
    printList(n1);

    ListNode* rev1 = solution.reverseList(n1);
    cout << "Test 1 Output: ";
    printList(rev1); // Expected: [3 -> 2 -> 1]

    // Test Case 2: Single-node list (edge case)
    ListNode* n2 = new ListNode(42);
    ListNode* rev2 = solution.reverseList(n2);
    cout << "Test 2 Output: ";
    printList(rev2); // Expected: [42]

    return 0;
}
