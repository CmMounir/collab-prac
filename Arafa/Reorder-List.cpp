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
    void reorderList(ListNode* head) {
        int n = 0;
        stack<int> myStack;
        ListNode* temp = head;
        while(temp != nullptr) {
            myStack.push(temp->val);
            temp = temp->next;
            n++;
        }
        if(n < 3) return ;

        temp = head;
        int index = 0;
        ListNode* helper;

        while(index < n/2) {
            helper = new ListNode(myStack.top()); myStack.pop();
            helper->next = temp->next;
            temp->next = helper;
            temp = temp->next->next;
            index++;         
        } 
        temp = head;
        index = 0;
        while(index < n-1) {
            temp = temp->next;
            index++;
        }    
        temp->next = nullptr;    
    }
};