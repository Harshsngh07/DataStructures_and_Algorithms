class Solution
{
public:
    bool isLeaf(TreeNode *root)
    {
        if (root == NULL)
            return false;

        if (root->left == NULL && root->right == NULL)
            return true;
        return false;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        int sum(0);

        if (root == NULL)
            return 0;

        if (root != NULL)
        {
            if (isLeaf(root->left))
                sum += root->left->val;
            else
                sum += sumOfLeftLeaves(root->left);

            sum += sumOfLeftLeaves(root->right);
        }

        return sum;
    }
};