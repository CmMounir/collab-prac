1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        ListNode* new_head= nullptr;
15        ListNode* helper = nullptr;
16
17        while(head != nullptr) {
18            // create node to hold current value
19            helper = new ListNode(head->val);
20
21            if(new_head == nullptr) {
22                new_head = helper;
23            }
24            else {
25                helper->next = new_head;
26                new_head = helper;
27            }
28
29            head = head->next;
30        }
31
32        return new_head;
33    }
34};