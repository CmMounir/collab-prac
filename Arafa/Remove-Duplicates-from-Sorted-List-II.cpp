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
13    ListNode* deleteDuplicates(ListNode* head) {
14        ListNode* new_head = nullptr;
15        ListNode* helper;
16
17        map<int, int> myMap;
18
19        while(head != nullptr) {
20            myMap[head->val]++;
21            head = head->next;
22        }
23
24        for(const auto& pair : myMap) {
25            if(pair.second == 1) {
26                if(new_head == nullptr) {
27                    new_head = new ListNode(pair.first);
28                    helper = new_head;
29                }
30                else {
31                    ListNode* node = new ListNode(pair.first);
32                    helper->next = node;
33                    helper = node;
34                }
35            }
36        }
37
38        return new_head;
39    }
40};