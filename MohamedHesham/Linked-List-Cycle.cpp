class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* first = head;
        ListNode* second = head;

        while (second && second->next) {
            first = first->next;
            second = second->next->next;

            if (first == second) {
                return true;  // Cycle detected
            }
        }

        return false;  // No cycle
    }
};
