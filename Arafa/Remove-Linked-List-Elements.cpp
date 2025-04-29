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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* new_head = nullptr;
        ListNode* tail = nullptr;
        ListNode* helper = nullptr;
        while(head != nullptr) {
            if(new_head == nullptr) {
                if(head->val != val) {
                    helper = new ListNode(head->val);
                    new_head = helper;
                    tail = helper;
                }
            }
            else {
                if(head->val != val) {
                    helper = new ListNode(head->val);
                    tail->next = helper;
                    tail = helper;
                }
            }
            head = head->next;
        }
        return new_head;
    }
};