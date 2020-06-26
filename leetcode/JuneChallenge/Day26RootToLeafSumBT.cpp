class Solution
{
public:
    long long int ans = 0;
    void sumNumbersUtil(TreeNode *root, int val)
    {
        if (root == NULL)
            return;

        val *= 10;
        val += root->val;

        if (!root->left && !root->right)
        {
            ans += val;
            return;
        }

        sumNumbersUtil(root->left, val);
        sumNumbersUtil(root->right, val);
    }

    int sumNumbers(TreeNode *root)
    {

        if (!root)
            return 0;

        sumNumbersUtil(root, 0);

        return ans;
    }
};