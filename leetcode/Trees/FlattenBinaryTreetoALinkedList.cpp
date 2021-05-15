//recursion
class Solution {
public:
    TreeNode* prev = NULL;
    void flatten(TreeNode* node) {
       if(node==NULL) return;
       
       flatten(node->right);
       flatten(node->left);
       
       node->right = prev;
       node->left = NULL;
       prev = node; 
    }
};

//stack
class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (root == NULL)
            return;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *curr = st.top();
            st.pop();
            if (curr->right != NULL)
                st.push(curr->right);
            if (curr->left != NULL)
                st.push(curr->left);
            if (!st.empty())
                curr->right = st.top();
            curr->left = NULL;
        }
    }
};

// time O(n) space O(1) fastest solution
class Solution
{
public:
    void flatten(TreeNode *root)
    {
        TreeNode *curr = root;
        while (curr != NULL)
        {
            if (curr->left != NULL)
            {
                TreeNode *prev = curr->left;
                while (prev->right)
                    prev = prev->right;
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};