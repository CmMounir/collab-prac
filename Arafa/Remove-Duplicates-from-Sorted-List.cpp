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
        std::set<int> mySet;
        ListNode* helper = nullptr;

        helper = head;
        while(helper != nullptr) {
            mySet.insert(helper->val);
            helper = helper->next;
        }

        ListNode* new_head = nullptr;
        ListNode* tail = nullptr;
       

        for(const int& element : mySet) {
            helper = new ListNode(element);
            if(new_head == nullptr) 
                new_head = helper;
            else 
                tail->next = helper;
            tail = helper;
        }
        
        return new_head;
    }
};