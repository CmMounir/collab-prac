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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* Sequence = new ListNode();
        ListNode* Head = Sequence;
        while(1)
        {
            //end of the linked lists
            if(list1 == nullptr && list2 == nullptr)
                break;
            else if(list1 == nullptr && list2 != nullptr)
            {
                Sequence->next = new ListNode(list2->val);
                Sequence = Sequence->next;
                list2 = list2->next;   
            }
            else if(list1 != nullptr && list2 == nullptr)
            {
                Sequence->next = new ListNode(list1->val);
                Sequence = Sequence->next;
                list1 = list1->next;
            }
            else    //neither is at end
            {
                if(list1->val <= list2->val)
                {
                    Sequence->next = new ListNode(list1->val);
                    Sequence = Sequence->next;
                    list1 = list1->next;
                }
                else if(list1->val > list2->val)
                {
                    Sequence->next = new ListNode(list2->val);
                    Sequence = Sequence->next;
                    list2 = list2->next; 
                }
            }
        }
        return Head->next;  //return head start of the sorted linked list
    }
};