class Solution {
private:
    ListNode* head;
    ListNode* tail;
public:
    void addDigit(int digit) {
        if (head == nullptr) {
            head = new ListNode(digit);
            tail = head;
            return;
        }
        
        tail->next = new ListNode(digit);
        tail = tail->next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        head = nullptr;
        tail = nullptr;

        while ((l1 != nullptr) || (l2 != nullptr) || (carry != 0)) {
            carry += l1 ? l1->val : 0;
            carry += l2 ? l2->val : 0;
            addDigit(carry % 10);
            carry /= 10;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        return head;
    }
};