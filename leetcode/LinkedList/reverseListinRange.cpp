class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int m, int n)
    {

        if (m == n)
            return head;

        ListNode *current = head, *prev = NULL;

        for (int i = 0; current != NULL && i < m - 1; i++)
        {
            prev = current;
            current = current->next;
        }

        ListNode *lastNodeOfFirstPart = prev;
        ListNode *lastNodeOfSubList = current;
        ListNode *next = NULL;

        for (int i = 0; current != NULL && i < n - m + 1; i++)
        {
            next = current;
            current->next = prev;
            prev = current;
            current = next;
        }

        if (lastNodeOfFirstPart != NULL)
            lastNodeOfFirstPart->next = prev;
        else
            head = prev;

        lastNodeOfSubList->next = current;

        return head;
    }
};