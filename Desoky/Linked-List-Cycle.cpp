/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    ListNode* slow_head = head;
    ListNode* fast_head = head;
    bool first_iteration = true;
    while(slow_head && fast_head && fast_head->next)
    {
        if(!first_iteration)
        {
            if(slow_head == fast_head)
                return true;    //there's a cycle
        }
        slow_head = slow_head->next;
        fast_head = fast_head->next->next;
        first_iteration = false;
    }
    return false;
    }
};