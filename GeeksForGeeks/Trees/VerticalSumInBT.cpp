class Solution
{
public:
    void helper(Node *root, int hd, map<int, int> &m)
    {
        if (root == NULL)
            return;

        helper(root->left, hd - 1, m);
        m[hd] += root->data;
        helper(root->right, hd + 1, m);
    }

    vector<int> verticalSum(Node *root)
    {
        map<int, int> m;
        helper(root, 0, m);
        vector<int> v;
        for (auto i : m)
            v.push_back(i.second);
        return v;
    }
};