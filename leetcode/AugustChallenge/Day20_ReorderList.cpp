class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *current = head;
        ListNode *prev = nullptr;
        while (current)
        {
            ListNode *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    void reorderList(ListNode *head)
    {
        if (!head)
        {
            return;
        }
        // Step 1. Break the list from the middle
        ListNode *current1 = head;
        ListNode *current2 = head->next;
        while (current2 && current2->next)
        {
            current1 = current1->next;
            current2 = current2->next->next;
        }
        current2 = current1->next;
        current1->next = nullptr;

        // Step 2. Adjust pointers to head and tail
        current1 = head;
        current2 = reverse(current2);

        // Step 3. Merge two lists
        while (current2)
        {
            ListNode *temp1 = current1->next;
            ListNode *temp2 = current2->next;
            current1->next = current2;
            current2->next = temp1;
            current1 = temp1;
            current2 = temp2;
        }
    }
};