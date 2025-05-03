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
    ListNode* sortList(ListNode* head) {
        vector<int> myVec;
        while(head != nullptr) {
            myVec.push_back(head->val);
            head = head->next;
        }
        sort(myVec.begin(), myVec.end());

        ListNode* tail = nullptr;
        ListNode* helper = nullptr;
        for(const auto& element : myVec) {
            if(head == nullptr) {
                helper = new ListNode(element);
                head = helper;
                tail = helper;
            }
            else {
                helper = new ListNode(element);
                tail->next = helper;
                tail = helper;
            }
        }
        return head;
    }
};