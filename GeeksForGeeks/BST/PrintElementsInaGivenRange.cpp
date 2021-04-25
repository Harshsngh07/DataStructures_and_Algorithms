vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();

        if (node->data >= low && node->data <= high)
            ans.push_back(node->data);
        q.pop();

        if (node->left != NULL)
            q.push(node->left);

        if (node->right != NULL)
            q.push(node->right);
    }

    sort(ans.begin(), ans.end());
    return ans;
}