int minValue(Node *root)
{
    if (root == NULL)
        return -1;

    Node *curr = root;
    while (curr != NULL)
    {

        if (curr->left == NULL)
            return curr->data;
        else
            curr = curr->left;
    }

    return curr->data;
}