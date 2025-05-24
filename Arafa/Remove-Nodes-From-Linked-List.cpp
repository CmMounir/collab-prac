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
    ListNode* removeNodes(ListNode* head) {
        stack<int> elements;
        
        ListNode* helper = head;
        while(helper != nullptr) {
            elements.push(helper->val);
            helper = helper->next;
        }
        

        ListNode* new_head = nullptr;
        ListNode* tail = nullptr;
        int max = INT_MIN;

        while(!elements.empty()) {
            if(new_head == nullptr) {
                max = elements.top();
                helper = new ListNode(max);          
            }
            else if(elements.top() >= max){
                max = elements.top();
                helper = new ListNode(max);
                helper->next = new_head;
            }
            new_head = helper; 
            elements.pop();
        }
        
        return new_head;
    }
};