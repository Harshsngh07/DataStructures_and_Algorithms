class Solution
{
public:
    int isLeaf(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
            return 1;
        return 0;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int sum(0);
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