int detectloop(Node *head)
{

    // your code here
    Node *slow = head;
    Node *fast = head;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }
    return 0;
}