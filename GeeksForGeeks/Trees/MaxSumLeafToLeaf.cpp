int solve(Node *root, int &res)
{
    if (root == NULL)
        return 0;
    if (!root->left && !root->right)
        return root->data;

    int l = solve(root->left, res);
    int r = solve(root->right, res);

    if (root->left && root->right)
    {
        res = max(res, l + r + root->data);

        return max(l, r) + root->data;
    }

    return (!root->left) ? r + root->data : l + root->data;
}

int maxPathSum(Node *root)
{
    // code here
    int res = INT_MIN;
    solve(root, res);
    return res;
}