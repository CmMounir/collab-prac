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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == nullptr) return head;

        ListNode* temp = head;
        int n = 0;
        while(temp != nullptr) {
            n++;
            temp = temp->next;
        }
        k = k%n;
        if(k == 0) return head;
        temp = head;
        int index = 0;
        ListNode* helper= nullptr;
        ListNode* new_head= nullptr;
        while(temp != nullptr) {
            if(n-k-1 == index) {
                helper = temp->next;
                temp->next = nullptr;
                new_head = helper;
                while(helper!=nullptr && helper->next != nullptr) {
                    helper = helper->next;
                }
                if(helper != nullptr)
                    helper->next = head;
                break;
            }
            else{

            }
            index++;
            temp = temp->next;
        }
        return new_head;
    }
};