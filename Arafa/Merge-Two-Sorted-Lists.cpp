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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        while(list1 != nullptr || list2 != nullptr) {
            ListNode *helper;

            if( list1 != nullptr && list2 != nullptr) {
                if(list1->val <= list2->val) {
                    helper = new ListNode(list1->val);
                    list1 = list1->next;
                }
                else {
                    helper = new ListNode(list2->val);
                    list2 = list2->next;
                }
            }
            else if(list1 != nullptr) {
                helper = new ListNode(list1->val);
                list1 = list1->next;
            }
            else { 
                helper = new ListNode(list2->val);
                list2 = list2->next;
            } 

            if(head == nullptr) {
                head = helper;
                tail = helper;
            }
            else {
                tail->next = helper;
                tail = helper;
            }
        }
        return head;
    }
};