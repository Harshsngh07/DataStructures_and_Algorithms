class Solution {
public:
    
    void Inorder(vector<int>& v, TreeNode* node)
    {
        if(node == NULL) return;
        
        Inorder(v,node->left);
        v.push_back(node->val);
        Inorder(v, node->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL) return p==q;
        if(p->val!=q->val) return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};