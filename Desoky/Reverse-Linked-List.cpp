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
#include <stack>
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(head != nullptr)
        {
            ListNode* result = new ListNode();
            ListNode* new_head = result;
            stack<int> temp_stack;
            while(head != nullptr)
            {
                temp_stack.push(head->val);
                head = head->next;
            }
            result->val = temp_stack.top();
            temp_stack.pop();
            while(!temp_stack.empty())
            {
                result->next = new ListNode();
                result = result->next;
                result->val = temp_stack.top();
                temp_stack.pop();
            }
            return new_head;
        }
        else
            return nullptr;
    }
};