#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int decimalValue = 0;
        while (head) {
            decimalValue = decimalValue * 2 + head->val;
            head = head->next;
        }
        return decimalValue;
    }
};

int main() {
    // Example usage:
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);

    Solution solution;
    int decimalValue = solution.getDecimalValue(head);

    std::cout << "Decimal value: " << decimalValue << std::endl;

    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
