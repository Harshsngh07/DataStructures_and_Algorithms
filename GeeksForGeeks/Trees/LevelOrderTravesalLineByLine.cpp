vector<vector<int>> levelOrder(Node *node)
{
    //Your code here
    vector<vector<int>> ans;
    queue<Node *> q;
    q.push(node);

    while (!q.empty())
    {
        int sz = q.size();
        vector<int> v;
        while (sz--)
        {
            Node *node;
            node = q.front();
            v.push_back(node->data);

            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);

            if (!q.empty())
                q.pop();
        }
        ans.push_back(v);
    }
    return ans;
}