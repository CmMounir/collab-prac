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
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }
        else if (list1 == nullptr && list2 != nullptr) {
            return list2;
        }
        else if (list1 != nullptr && list2 == nullptr) {
            return list1;
        }
        ListNode* res = nullptr;
        ListNode* out = nullptr;

        while ((list1 != nullptr) && (list2 != nullptr)) {
            if (list1->val > list2->val) {
                if (res == nullptr) {
                    res = new ListNode(list2->val);
                    out = res;
                }
                else{
                    res->next = new ListNode(list2->val);
                    res = res->next;
                }
                list2 = list2->next;
            }
            else {
                if (res == nullptr) {
                    res = new ListNode(list1->val);
                    out = res;
                }
                else {
                    res->next = new ListNode(list1->val);
                    res = res->next;
                }
                list1 = list1->next;
            } 
        }

        while (list1 != nullptr) {
            res->next = new ListNode(list1->val);
            res = res->next;
            list1 = list1->next;
        }
        while (list2 != nullptr) {
            res->next = new ListNode(list2->val);
            res = res->next;
            list2 = list2->next;
        }


        return out;
    }
};