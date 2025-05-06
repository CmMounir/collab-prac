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
    ListNode* partition(ListNode* head, int x) {
        ListNode* prev = nullptr;
        ListNode* currentNode = head;

        ListNode* newHead = nullptr;
        ListNode* newTail = nullptr;

        auto add = [&newHead, &newTail](ListNode* n) {
            n->next = nullptr;
            if (newHead == nullptr) {
                newHead = n;
                newTail = newHead;
            }
            else {
                newTail->next = n;
                newTail = newTail->next;
            }
            };

        while (currentNode) {
            if (currentNode->val >= x) {
                if (prev) {
                    prev->next = currentNode->next;
                }
                else {
                    head = currentNode->next;
                    add(currentNode);
                    currentNode = head;
                    continue;
                }
                add(currentNode);
                currentNode = prev->next;
                continue;
            }
            prev = currentNode;
            currentNode = currentNode->next;
        }

        
        currentNode = head;
        if (currentNode == nullptr) {
            return newHead;
        }
        while (currentNode) {
            if (currentNode->next == nullptr) {
                currentNode->next = newHead;
                break;
            }
            currentNode = currentNode->next;
        }
        
        return head;
    }
};