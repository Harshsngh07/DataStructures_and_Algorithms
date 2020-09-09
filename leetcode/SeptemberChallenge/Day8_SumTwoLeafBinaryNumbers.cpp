class Solution
{
public:
    void solve(TreeNode *root, int curr, int &ans)
    {
        if (!root->left && !root->right)
            ans += curr * 2 + root->val;
        curr = curr * 2 + root->val;

        if (root->left)
            solve(root->left, curr, ans);
        if (root->right)
            solve(root->right, curr, ans);
    }

    int sumRootToLeaf(TreeNode *root)
    {

        if (!root)
            return 0;

        int ans(0), curr(0);

        solve(root, curr, ans);

        return ans;
    }
};