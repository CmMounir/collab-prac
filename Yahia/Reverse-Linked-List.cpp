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
 #include <list>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        std::list<int> list;
        ListNode* temp;
        temp=head;
        while(temp != nullptr)
        {
            list.push_back(temp->val);
            // std::cout << list.back();
            temp=temp->next;
        }
        list.reverse();
        temp=head;
        while(head != nullptr)
        {
            head->val=list.front();
            list.pop_front();
            // std::cout << head->val;
            head=head->next;
        }
        head=temp;
        return head;
    }
};