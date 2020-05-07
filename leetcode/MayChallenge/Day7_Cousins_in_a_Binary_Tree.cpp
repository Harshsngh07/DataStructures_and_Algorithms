/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
    int level(TreeNode *curr, int &par, int value, int height)
    {
        if (!curr)
            return 0;
        if (curr->val == value)
            return height;

        par = curr->val;
        int left = level(curr->left, par, value, height + 1);
        if (left)
            return left;
        par = curr->val;
        int right = level(curr->right, par, value, height + 1);
        return right;
    }

public:
    bool isCousins(TreeNode *root, int x, int y)
    {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        if (root->val == x || root->val == y)
            return false;

        int xpar = -1;
        int xLevel = level(root, xpar, x, 0);

        int ypar = -1;
        int yLevel = level(root, ypar, y, 0);

        if (xpar != ypar && xLevel == yLevel)
            return true;
        return false;
    }
};