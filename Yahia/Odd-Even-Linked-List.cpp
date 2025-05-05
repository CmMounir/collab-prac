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
    ListNode* oddEvenList(ListNode* head) {
        std::list<int> oddList;
        std::list<int> evenList;
        ListNode* temp;
        temp=head;
        int x =1;
        while(temp != nullptr)
        {
           if(x%2==0)
           {
            // std::cout <<"even" <<std::endl;
            evenList.push_back(temp->val);
           }else
           {
            oddList.push_back(temp->val);
           }
           temp=temp->next;
           x++;
        }
        temp=head;
        while(oddList.size()>0)
        {
           head->val=oddList.front();
           oddList.pop_front();
           head=head->next;
           x++;
        }
        while(evenList.size()>0)
        {
           head->val=evenList.front();
           evenList.pop_front();
           head=head->next;
           x++;
        }
        head=temp;
        return head;
    }
};