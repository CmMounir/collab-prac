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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        queue<int> s1;
15        queue<int> s2;
16
17        while(l1 != nullptr) {
18            s1.push(l1->val);
19            l1 = l1->next;
20        }
21
22        while(l2 != nullptr) {
23            s2.push(l2->val);
24            l2 = l2->next;
25        }
26
27        int top_s1, top_s2;
28        int remaining = 0;
29        
30        ListNode* head = nullptr;
31        ListNode* helper = nullptr;
32
33        while(!s1.empty() || !s2.empty() || remaining == 1) {
34            if(!s1.empty()) {
35                top_s1 = s1.front(); s1.pop();
36            }
37            else {
38                top_s1 = 0;
39            }
40
41            if(!s2.empty()) { 
42                top_s2 = s2.front(); s2.pop();
43            }
44            else { 
45                top_s2 = 0;
46            }
47
48            if(top_s1 + top_s2 + remaining < 10) {
49                int total = top_s1 + top_s2 + remaining;
50                remaining = 0;
51                if(head == nullptr) {
52                    head = new ListNode(total);
53                    helper = head;
54                }
55                else {
56                    ListNode* temp = new ListNode(total);
57                    helper->next = temp;
58                    helper = temp;
59                }
60            }
61            else {
62                int total = top_s1 + top_s2 + remaining - 10;
63                remaining = 1;
64                if(head == nullptr) {
65                    head = new ListNode(total);
66                    helper = head;
67                }
68                else { 
69                    ListNode* temp = new ListNode(total);
70                    helper->next = temp;
71                    helper = temp;
72                }
73            }
74        }
75
76        return head;
77    }
78};