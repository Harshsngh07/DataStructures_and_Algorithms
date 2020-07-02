class Solution {
public:
    
    void Inorder(TreeNode* root, vector<vector<int>> &v, int level)
    {
        if(root == NULL) return ;
        if(level >= v.size())
            v.push_back({});
        
        Inorder(root->left, v, level+1);
        
        v[level].push_back(root->val);
        
        Inorder(root->right, v, level+1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        Inorder(root, v, 0);
        reverse(v.begin(),v.end());
        return v;
    }
};
