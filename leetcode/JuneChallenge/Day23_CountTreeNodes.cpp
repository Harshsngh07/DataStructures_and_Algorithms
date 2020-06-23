class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        int count(0);

        if (root == NULL)
            return 0;

        queue<TreeNode *> q;

        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            count++;
            q.pop();

            if (node->left != NULL)
                q.push(node->left);

            if (node->right != NULL)
                q.push(node->right);
        }

        return count;
    }
};