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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        ListNode* partial_tail = nullptr;
        ListNode* partial_head = nullptr;
        ListNode* helper = nullptr;
         ListNode* before = nullptr;
        int index = 0;
        while(temp != nullptr) {
            if(index >= left-1 && index <= right-1) {
                if(partial_tail == nullptr) {
                    helper = new ListNode(temp->val);
                    partial_tail = helper;
                    partial_head = helper;
                }
                else {
                    helper = new ListNode(temp->val);
                    helper->next = partial_head;
                    partial_head = helper;
                }
            }
            else if(index < left-1) {
                before = temp;
            }
            else if(index > right-1) {
                partial_tail->next = temp;
                break;
            }
            temp = temp->next;
            index++;
        }

        if(before != nullptr)
            before->next = partial_head;
        else 
            head = partial_head;
        return head;
    }
};