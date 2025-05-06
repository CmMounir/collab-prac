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
    if (!head || !head->next)
        return head;
    ListNode* newHead = nullptr;
    ListNode* newTail = nullptr;
    ListNode* current = head;
    ListNode* lastEvenNode = head;
    size_t counter = 0;
    auto add = [&newHead, &newTail](ListNode* n) {
        n->next = nullptr;
        if (newHead == nullptr) {
            newHead = n;
            newTail = newHead;
        }
        else {
            newTail->next = n;
            newTail = newTail->next;
        }
        };

    while (current)
    {
        counter++;
        if (!(counter % 2)) {
            lastEvenNode->next = current->next;
            add(current);
            current = lastEvenNode->next;
            continue;
        }
        else {
            lastEvenNode = current;
        }
        current = current->next;
    }

    current = head;
    while (current)
    {
        if (current->next == nullptr) {
            current->next = newHead;
            break;
        }
        current = current->next;
    }
    return head;
}
};