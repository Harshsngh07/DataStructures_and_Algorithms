int intersectPoint(Node *headA, Node *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;

    Node *curr1 = headA, *curr2 = headB;

    while (curr1 != curr2)
    {
        if (curr1 == NULL)
            curr1 = headB;
        else
            curr1 = curr1->next;
        if (curr2 == NULL)
            curr2 = headA;
        else
            curr2 = curr2->next;
    }

    return curr1->data;
}
