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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = nullptr;
        ListNode *tail = nullptr;

        auto addValue = [&head, &tail](int value)
        {
            if (head == nullptr)
            {
                head = new ListNode(value);
                tail = head;
            }
            else
            {
                tail->next = new ListNode(value);
                tail = tail->next;
            }
        };

        while (list1 && list2)
        {
            if (list1->val > list2->val)
            {
                addValue(list2->val);
                list2 = list2->next;
            }
            else
            {
                addValue(list1->val);
                list1 = list1->next;
            }
        }

        while (list1)
        {
            addValue(list1->val);
            list1 = list1->next;
        }

        while (list2)
        {
            addValue(list2->val);
            list2 = list2->next;
        }

        return head;
    }
};