int countTriplets(struct Node *head, int x)
{
    unordered_map<int, int> m;

    Node *temp1 = head, *temp2;
    while (temp1)
    {
        m[temp1->data]++;
        temp1 = temp1->next;
    }

    temp1 = head;

    int count(0);
    for (; temp1->next != NULL; temp1 = temp1->next)
    {
        for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
        {
            int check = x - (temp1->data + temp2->data);
            if (m[check] != 0 && check > temp2->data)
                count++;
        }
    }

    return count;
}