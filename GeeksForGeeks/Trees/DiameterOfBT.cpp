int height(Node *node)
{
    if(node == NULL) return 0;
    
    int h;
    
    int left = height(node->left);
    int right = height(node->right);
    
    if(left>right)
        h = 1+left;
    else
        h = 1+right;
    
    return  h;
}
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {
    // Your code here
    
    if(node == NULL) return 0;
    
    int lHeight = height(node->left);
    int rHeight = height(node->right);
    
    int lDiameter = diameter(node->left);
    int rDiameter = diameter(node->right);
    
    int fd = max(1+lHeight+rHeight, max(lDiameter,rDiameter));
    
    return fd;
    
    
    
}
