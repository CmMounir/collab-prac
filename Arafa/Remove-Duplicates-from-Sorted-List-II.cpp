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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> myMap;
        ListNode* temp = head;
        while(temp) {
            myMap[temp->val]++;
            temp = temp->next;
        }

        ListNode* new_head = nullptr;
        ListNode* tail = nullptr;
        ListNode* helper = nullptr;
        
        for(const auto& pair : myMap) {
            if(pair.second == 1) {
                if(new_head == nullptr) {
                helper = new ListNode(pair.first);
                new_head = helper;
                tail = helper;
                }        
                else {
                helper = new ListNode(pair.first);
                tail->next = helper;
                tail = helper;
                }
            }
        }
        return new_head;
    }
};