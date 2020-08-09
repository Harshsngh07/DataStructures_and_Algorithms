class Solution {
public:
    
    int dfs(TreeNode* root, int sum)
    {
        if(!root) return 0;
        
        if(root->val == sum)
            return 1 + dfs(root->left, sum-root->val) + dfs(root->right, sum-root->val);
        return dfs(root->left, sum-root->val) + dfs(root->right, sum-root->val);
    }
    
    
    int pathSum(TreeNode* root, int sum) {
        
        if(!root) return 0;
        
        return dfs(root,sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
   
    }
};