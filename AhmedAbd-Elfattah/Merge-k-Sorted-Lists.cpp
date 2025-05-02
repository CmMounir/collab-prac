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
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        
        while (1)
        {
            int mavVal = INT_MIN;
            for (auto &i : lists)
            {
                if (i != nullptr)
                {
                    pq.push(i->val);
                    mavVal = std::max(mavVal, i->val);
                    i = i->next;
                }
            }

            for (auto &i : lists)
            {
                while(i && i->val <= mavVal){
                    pq.push(i->val);
                    i = i->next;
                }
            }




            if (pq.empty())
            {
                break;
            }

            while (!pq.empty())
            {
                if (head == nullptr)
                {
                    head = new ListNode(pq.top());
                    tail = head;
                    pq.pop();
                }
                else
                {
                    tail->next = new ListNode(pq.top());
                    tail = tail->next;
                    pq.pop();
                }
            }
        }
        return head;
    }
};