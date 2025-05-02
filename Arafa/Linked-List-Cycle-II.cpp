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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode *, int> myMap;
        while(head != nullptr) {
            if(myMap[head] == 1)
                return head;
            else 
                myMap[head] = 1;
            head = head->next;
        }
        return nullptr;
    }
};