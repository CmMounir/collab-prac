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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow_pointer = head;
        ListNode* fast_pointer = head;

        while(fast_pointer != nullptr) {
            if(fast_pointer->next == nullptr) {
                return slow_pointer;
            }
            else {
                slow_pointer = slow_pointer->next;
                fast_pointer = fast_pointer->next->next;
            }
        }

        return slow_pointer;
    }
};