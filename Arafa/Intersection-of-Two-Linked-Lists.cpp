/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* result = nullptr;
        
        map<ListNode *, int> myMap;
        while(headA) {
            myMap[headA] = 1;
            headA = headA->next;
        }

        while(headB) {
            if(myMap[headB] == 1) {
                result = headB;
                break;
            }
            headB = headB->next;
        }

        return result;
    }
};