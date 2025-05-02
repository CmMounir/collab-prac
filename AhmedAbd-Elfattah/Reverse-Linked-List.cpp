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
    private:
    ListNode *first;
public:
void reverse(ListNode *middle, ListNode *pointer)
    {
        if (nullptr == pointer)
        {
            return;
        }
        reverse(middle, pointer->next);

        if (first == middle)
        {
            first = nullptr;
            return;
        }

        if (!first || !pointer)
        {
            return;
        }
        std::swap(first->val, pointer->val);
        first = first->next;
    }

    ListNode *reverseList(ListNode *head)
    {
        ListNode *headPointer = head;
        ListNode *revPointer = head;

        ListNode *MiddlePointer = head;
        ListNode *fastPointer = head;

        while (fastPointer && fastPointer->next)
        {
            MiddlePointer = MiddlePointer->next;
            fastPointer = fastPointer->next->next;
        }
        first = headPointer;
        reverse(MiddlePointer, revPointer);

        return head;
    }
};