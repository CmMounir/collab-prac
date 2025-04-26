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
        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        ListNode *helper = nullptr;
        int to_remember = 0;

        while( l1 != nullptr || l2 != nullptr ) {
            int sum;

            if(l1 != nullptr && l2 != nullptr) {
                sum = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 != nullptr) {
                sum = l1->val;
                l1 = l1->next;
            }
            else {
                sum = l2->val;
                l2 = l2->next;
            }

            sum += to_remember;
            if(sum > 9) {
                to_remember = 1;
                sum -= 10;
            }
            else {
                to_remember = 0;
            }
            helper = new ListNode(sum);

            if(head == nullptr) {
                head = helper;
                tail = helper;
            }
            else {
                tail->next = helper;
                tail = helper;
            }
        }

        if(to_remember == 1) {
            helper = new ListNode(1);
            tail->next = helper;
        }
        return head;
    }
};