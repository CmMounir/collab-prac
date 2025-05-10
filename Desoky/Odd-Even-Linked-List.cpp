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
ListNode* oddEvenList(ListNode* head) 
{
    if(head && head->next && head->next->next)  //at least there are 3 elements
    {
        ListNode* ODD = head;
        ListNode* EVEN = head->next;
        ListNode* Result = new ListNode();
        ListNode* new_head = Result;
        while(ODD)
        {
            Result->next = new ListNode();
            Result = Result->next;
            Result->val = ODD->val;
            if(ODD -> next == nullptr)  //end of the Linked List
                break;
            ODD = ODD->next->next;
        }
        while(EVEN)
        {
            Result->next = new ListNode();
            Result = Result->next;
            Result->val = EVEN->val;
            if(EVEN -> next == nullptr)  //end of the Linked List
                break;
            EVEN = EVEN->next->next;
        }
        ListNode* new_head_return = new_head->next;
        delete new_head;
        return new_head_return;
    }
    else if(head == nullptr) //if there's no elements
        return nullptr;
    else    //if there are 2 or 1 elements only
        return head;
}
};