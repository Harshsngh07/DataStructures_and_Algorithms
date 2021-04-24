class Solution
{
public:
    void helper(Node *root, int k, int &min_Diff, int &minDiffKey)
    {
        if (root == NULL)
            return;

        if (root->data == k)
        {
            min_Diff = 0;
            return;
        }

        if (min_Diff > abs(root->data - k))
        {
            min_Diff = abs(root->data - k);
            minDiffKey = root->data;
        }

        if (k < root->data)
            return helper(root->left, k, min_Diff, minDiffKey);
        else
            return helper(root->right, k, min_Diff, minDiffKey);
    }

    int minDiff(Node *root, int k)
    {
        int min_Diff(INT_MAX), minDiffKey(-1);

        helper(root, k, min_Diff, minDiffKey);
        return min_Diff;
    }
};