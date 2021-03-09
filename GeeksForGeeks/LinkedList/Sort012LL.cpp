class Solution
{
public:
    Node *segregate(Node *head)
    {

        // Add code here
        int a[3] = {0};
        Node *temp = head;
        while (temp != NULL)
        {
            a[temp->data]++;
            temp = temp->next;
        }

        temp = head;
        for (int i = 0; i < 3; i++)
        {
            while (a[i]--)
            {
                temp->data = i;
                temp = temp->next;
            }
        }

        return head;
    }
};
