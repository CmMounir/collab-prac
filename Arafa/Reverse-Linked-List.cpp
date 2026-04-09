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
14        stack<ListNode*> myStack;
15        ListNode* temp = head;
16        ListNode* res = nullptr;
17
18        if(head == nullptr) 
19            return head;
20
21        myStack.push(nullptr);
22
23        while(temp != nullptr) {
24            myStack.push(temp);
25            temp = temp->next;
26        }
27        
28        while(!myStack.empty()) {
29            if(res == nullptr) {
30                res = myStack.top();
31                temp = res;
32            }
33            else {
34                temp->next = myStack.top();
35                temp = temp->next;
36            }
37            myStack.pop();
38        }
39        
40        return res;
41    }
42};