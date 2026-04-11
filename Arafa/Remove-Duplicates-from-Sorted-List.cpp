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
14        ListNode* temp = head;
15        ListNode* new_head;
16        ListNode* helper = nullptr;
17
18        int previous;
19
20        if(head == nullptr)
21            return head;
22
23        
24        while(temp != nullptr) {
25            if(temp == head) {
26                previous = temp->val;
27                new_head = new ListNode(previous);
28                helper = new_head;
29            }
30            else {
31                if(temp->val == previous) {
32                    // skip
33                }
34                else {
35                    previous = temp->val;
36                    ListNode* node = new ListNode(temp->val);
37                    helper->next = node;
38                    helper = node;
39                }
40            }
41            temp = temp->next;
42        }
43
44        return new_head;
45    }
46};