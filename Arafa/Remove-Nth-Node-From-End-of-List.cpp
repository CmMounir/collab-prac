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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode* temp = head;
        int counter = 0;       
        while(temp != nullptr) {
            counter++;
            temp = temp->next;
        }
                
        temp = head;
        ListNode* new_head = nullptr;
        ListNode* tail = nullptr;
        ListNode* helper = nullptr;
        int index = 0;
        
        while(temp != nullptr) {
            if(index == counter-n) {
                
            }
            else if(new_head == nullptr) {
                helper = new ListNode(temp->val);
                new_head = helper;
                tail = helper;
            }
            else {
                helper = new ListNode(temp->val);
                tail->next = helper;
                tail = helper;
            }
            
            temp = temp->next;
            index++;
        }
        return new_head;
    }
};