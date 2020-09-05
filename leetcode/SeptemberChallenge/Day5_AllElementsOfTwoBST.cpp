class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {

        vector<int> v, v1, ans;
        inorder(root1, v);
        inorder(root2, v1);

        int i = 0, j = 0;
        while (i < v.size() && j < v1.size())
        {
            if (v[i] <= v1[j])
            {
                ans.push_back(v[i]);
                i++;
            }
            else
            {
                ans.push_back(v1[j]);
                j++;
            }
        }

        while (i < v.size())
        {
            ans.push_back(v[i]);
            i++;
        }

        while (j < v1.size())
        {
            ans.push_back(v1[j]);
            j++;
        }

        return ans;
    }
};