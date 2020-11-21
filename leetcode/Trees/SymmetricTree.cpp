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
public:
    bool isMirror(TreeNode *a, TreeNode *b)
    {
        if (a == NULL && b == NULL)
            return 1;
        if (a == NULL || b == NULL)
            return 0;

        return a->val == b->val && isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }

    bool isSymmetric(TreeNode *root)
    {
        return isMirror(root, root);
    }
};