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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        for(const auto& element : lists) {
            ListNode* temp = element;
            while(temp != nullptr) {
                vec.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(vec.begin(), vec.end());
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        ListNode* helper;
        for(const auto& element : vec) {
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