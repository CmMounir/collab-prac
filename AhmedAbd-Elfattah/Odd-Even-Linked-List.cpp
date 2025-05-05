/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;

ListNode* h1 = nullptr;
ListNode* t1 = nullptr;

ListNode* h2 = nullptr;
ListNode* t2 = nullptr;

auto add_1 = [&h1, &t1](int val) {
    if (h1 == nullptr) {
        h1 = new ListNode(val);
        t1 = h1;
    }
    else {
        t1->next = new ListNode(val);
        t1 = t1->next;
    }
};

auto add_2 = [&h2, &t2](int val) {
    if (h2 == nullptr) {
        h2 = new ListNode(val);
        t2 = h2;
    }
    else {
        t2->next = new ListNode(val);
        t2 = t2->next;
    }
    };

size_t counter = 0;
while (head) {
    if (counter % 2) {
        add_2(head->val);
    }
    else {
        add_1(head->val);
    }
    counter++;
    head = head->next;
}
t1->next = h2;
return h1;
    }
};