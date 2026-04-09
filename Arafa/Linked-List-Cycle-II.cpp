1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* temp = head;
13        ListNode* res = nullptr;
14        map<ListNode*, bool> myMap;
15        while(temp != nullptr)
16        {
17            if(myMap[temp] == false) {
18                myMap[temp] = true;
19                res = temp->next;
20            }
21            else {
22                break; 
23            }
24            temp = temp->next;
25        }
26        return res;
27    }
28};