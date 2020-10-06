class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //recursive code
        /*
        if(root==NULL)
            return new TreeNode(val);
        else if(root->val < val )
            root->right = insertIntoBST(root->right, val);
        else if(root->val > val)
            root->left = insertIntoBST(root->left, val);
        return root;
        */
        
        //iterative code
        TreeNode* temp = new TreeNode(val);
        TreeNode* parent = NULL, *curr = root;
        
        while(curr!=NULL)
        {
            parent = curr;
            if(curr->val < val )
                curr = curr->right;
            else if(curr->val > val)
                curr = curr->left;
            else
                return root;
        }
        
        if(parent == NULL) return temp;
        if(parent->val > val)
            parent->left = temp;
        else 
            parent->right = temp;
        return root;
    }
};