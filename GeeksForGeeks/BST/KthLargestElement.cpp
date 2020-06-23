int kthLargest(Node *root, int K)
{
    vector<int> v;

    if (root == NULL)
        return -1;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();
        v.push_back(node->data);
        q.pop();

        if (node->left != NULL)
            q.push(node->left);

        if (node->right != NULL)
            q.push(node->right);
    }

    sort(v.begin(), v.end(), greater<int>());

    return v[K - 1];
}