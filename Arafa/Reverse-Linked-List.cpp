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
    ListNode* reverseList(ListNode* head) {
        ListNode* new_head = nullptr;
        ListNode* helper = nullptr;

        while(head != nullptr) {
            helper = new ListNode(head->val);
            if(new_head == nullptr) {
                new_head = helper;
            }
            else {
                helper->next = new_head;
                new_head = helper;
            }
            head = head->next;
        }
        return new_head;
    }
};