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
        stack<int> stack1;
        stack<int> stack2;

        while(l1 != nullptr) {
            stack1.push(l1->val);
            l1 = l1->next;
        }

        while(l2 != nullptr) {
            stack2.push(l2->val);
            l2 = l2->next;
        }

        ListNode* new_head = nullptr;
        ListNode* helper = nullptr;
        int remember = 0;
        
        while(!stack1.empty() || !stack2.empty()) {
            if(!stack1.empty() && !stack2.empty()) {
                int x= stack1.top()+stack2.top()+remember;
                if(x > 9) {
                    helper = new ListNode(x-10);
                    remember = 1;
                }
                else {
                    helper = new ListNode(x);
                    remember = 0;
                }
                stack1.pop();
                stack2.pop();
            }
            else if(!stack1.empty()) {
                int x= stack1.top()+remember;
                 if(x > 9) {
                    helper = new ListNode(x-10);
                    remember = 1;
                }
                else {
                    helper = new ListNode(x);
                    remember = 0;
                }
                stack1.pop();
            }
            else {
                int x= stack2.top()+remember;
                 if(x > 9) {
                    helper = new ListNode(x-10);
                    remember = 1;
                }
                else {
                    helper = new ListNode(x);
                    remember = 0;
                }
                stack2.pop();
            }

            if(new_head == nullptr) {
                new_head = helper;
            }
            else {
                helper->next = new_head;
                new_head = helper;
            }
        }
        if(remember == 1) {
            helper = new ListNode(remember);
            helper->next = new_head;
            new_head = helper;
        }
        return new_head;
    }
};