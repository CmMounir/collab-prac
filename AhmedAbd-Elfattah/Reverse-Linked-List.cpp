class Solution {
    private:
    ListNode *f;
public:
void rev (ListNode *m, ListNode *p)
    {
        if (nullptr == p)
            return;
        rev(m, p->next);
        if (f == m)
        {
            f = nullptr;
            return;
        }

        if (!f || !p)
        {
            return;
        }


        std::swap(f->val, p->val);
        f = f->next;


    }

    ListNode *reverseList(ListNode *head)
    {
        ListNode *headp = head;
        ListNode *revp = head;
        ListNode *mp = head;
        ListNode *fp = head;


        while (fp && fp->next)
        {
            mp = mp->next;
            fp = fp->next->next;
        }
        
        f = headp;
        rev(mp, revp);

        return head;
    }
};