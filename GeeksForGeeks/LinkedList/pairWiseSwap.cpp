// recursion
Node *pairWiseSwap(struct Node *head)
{
    // The task is to complete this method
    if (!head || !head->next)
        return head;

    Node *curr = head->next->next;

    Node *newH = head->next;

    head->next->next = head;
    head->next = pairWiseSwap(curr);

    return newH;

    return curr;
}