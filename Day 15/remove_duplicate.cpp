#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val) : val(val), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* p = head;
        while (p->next) {
            if (p->val == p->next->val) {
                ListNode* temp = p->next;
                p->next = p->next->next;
                delete temp;
            } else {
                p = p->next;
            }
        }

        return head;
    }
};

// Utility function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution solution;
    ListNode* result = solution.deleteDuplicates(head);

    std::cout << "Linked List after removing duplicates: " << std::endl;
    printLinkedList(result);

    // Don't forget to deallocate the memory used by the linked list
    ListNode* temp;
    while (result) {
        temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
