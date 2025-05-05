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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> odds;
        vector<int> evens;
        ListNode* temp = head;
        int counter = 0;
        while(temp) {
            if(counter%2 == 0) {
                odds.push_back(temp->val);
            }
            else {
                evens.push_back(temp->val);
            }
            counter++;
            temp = temp->next;
        }

        ListNode* new_head = nullptr;
        ListNode* tail = nullptr;
        ListNode* helper = nullptr;

        for(const auto& element: odds) {
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

        for(const auto& element: evens) {
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