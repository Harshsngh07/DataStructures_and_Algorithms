int height(Node* node)
{
    if(!node) return 0;
    
    int h;
    
    int left = height(node->left);
    int right = height(node->right);
    
    if(left>right) h = 1+left;
    else h = 1+right;
    
    return h;
}

bool isBalanced(Node *root)
{
    if(root==NULL) return true;
    return(isBalanced(root->left)&&isBalanced(root->right)&&(abs(height(root->right)-height(root->left))<=1));
}