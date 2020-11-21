class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (root == NULL)
            return 0;
        int ans(0);

        for (auto it = root->children.begin(); it != root->children.end(); it++)
            ans = max(ans, maxDepth(*it));

        return ans + 1;
    }
};