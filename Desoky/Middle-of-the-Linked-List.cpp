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
    ListNode* middleNode(ListNode* head) 
    {
    ListNode* Double_head = head;
    while(1)
    {
        if(Double_head == nullptr || Double_head->next == nullptr || Double_head->next->next == nullptr)
            break;
        head = head->next;
        Double_head = Double_head->next->next;
    }
    if(Double_head->next != nullptr)
    {
        return head->next;
    }
    return head;
    }
};