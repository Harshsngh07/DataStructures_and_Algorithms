int height(Node *root)
{
    // Write your code here.
    if (root == NULL)
        return 0;

    list<Node *> q;
    q.push_back(root);

    Node *front = NULL;
    int height = 0;

    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            front = q.front();
            q.pop_front();

            if (front->left)
                q.push_back(front->left);
            if (front->right)
                q.push_back(front->right);
        }
        height++;
    }
    return height - 1;
}