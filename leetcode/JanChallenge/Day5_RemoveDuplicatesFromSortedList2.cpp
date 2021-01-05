class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head or !head->next)
            return head;
        if (head->val == head->next->val)
        {
            int val = head->val;
            while (head and head->val == val)
                head = head->next;
            return deleteDuplicates(head);
        }
        else
        {
            head->next = deleteDuplicates(head->next);
            return head;
        }
    }
};