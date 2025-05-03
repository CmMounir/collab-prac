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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int, int> myMap;
        for(const auto& element: nums) {
            myMap[element] = 1;
        }
        vector<int> myVec;
        while(head !=nullptr) {
            if(myMap[head->val] == 1) {

            }
            else {
                myVec.push_back(head->val);
            }
            head = head->next;
        }

        ListNode* new_head = nullptr;
        ListNode* tail = nullptr;
        ListNode* helper = nullptr;
        for(const auto& element: myVec) {
            if(new_head == nullptr) {
                helper = new ListNode(element);
                new_head = helper;
                tail = helper;
            }
            else {
                helper = new ListNode(element);
                tail->next = helper;
                tail = helper;
            }
        }
        return new_head;
    }
};