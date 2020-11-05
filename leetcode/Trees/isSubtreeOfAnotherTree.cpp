class Solution
{
public:
    bool isIdentical(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == NULL && root2 == NULL)
            return true;
        if (root1 == NULL || root2 == NULL)
            return false;

        return root1->val == root2->val && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
    }

    bool isSubtree(TreeNode *s, TreeNode *t)
    {
        if (s == NULL || t == NULL)
            return false;

        if (isIdentical(s, t))
            return true;

        return isSubtree(s->left, t) || isSubtree(s->right, t);
    }
};