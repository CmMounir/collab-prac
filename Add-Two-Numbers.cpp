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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *root = new ListNode();
        ListNode *temp = root;
        int carry=0;
        while((l1 != nullptr) || l2 != nullptr)
        {
            int x=0, y=0;
            
            if(l1!=nullptr)
                x=l1->val;
            
            if(l2!=nullptr)
                y=l2->val;
            
            int sum = (x+y+carry)%10;
            carry = (x+y+carry)/10;
            
            temp->next = new ListNode();            
            temp = temp->next;
            temp->val = sum;
            if(l1!=nullptr)
                l1=l1->next;
            if(l2!=nullptr)
                l2=l2->next;
        }
        if(carry)
        {
             temp->next = new ListNode(1);
        }
        temp = root->next;
        delete(root);
        return temp;
    }
};