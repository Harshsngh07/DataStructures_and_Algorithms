class Solution {
public:
    
    vector<vector<int>> paths;
    vector<int> curr;
    
    bool isLeaf(TreeNode*  root)
    {
        return !root->left && !root->right;
    }
    
    void findPaths(TreeNode* root, int sum)
    {
        curr.push_back(root->val);
        
        if(isLeaf(root) && root->val == sum)
            paths.push_back(curr);
        else
        {
            if(root->left)
                findPaths(root->left, sum-root->val);
            if(root->right)
                findPaths(root->right, sum-root->val);
        }
        
        curr.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root)
            return paths;
        
        findPaths(root, sum);
        return paths;
    }
};