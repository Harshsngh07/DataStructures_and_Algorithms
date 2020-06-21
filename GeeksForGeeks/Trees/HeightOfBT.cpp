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
