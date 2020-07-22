class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root == NULL)
            return ans;
        
        stack<TreeNode*> s1,s2;
        s1.push(root);
        vector<int> v;
        while(!s1.empty() || !s2.empty())
        {
            while(!s1.empty())
            {
                TreeNode* node = s1.top();
                s1.pop();
                v.push_back(node->val);
                
                if(node->left!=NULL)
                    s2.push(node->left);
                if(node->right!=NULL)
                    s2.push(node->right);

            }
            if(!v.empty())
                ans.push_back(v);
            v.clear();
            while(!s2.empty())
            {
                TreeNode* node = s2.top();
                s2.pop();
                v.push_back(node->val);
                if(node->right!=NULL)
                    s1.push(node->right);
                if(node->left!=NULL)
                    s1.push(node->left);
            }
            if(!v.empty())
                ans.push_back(v);
            v.clear();
        }
        
        return ans;
    }
};