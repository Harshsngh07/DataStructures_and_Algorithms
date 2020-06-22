bool findPath(Node* root, vector<int>& path, int k)
{
    if(root==NULL)
        return false;
    
    path.push_back(root->data);
    
    if(root->data==k)
        return true;
    
    if((root->left) && findPath(root->left,path,k) || (root->right && findPath(root->right,path,k)))
        return true;
    
    path.pop_back();
    
    return false;
    
    
}




Node* lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
   if(root == NULL)
    return NULL;
    
    vector<int> path1,path2;
    
    if(!findPath(root,path1,n1) || !findPath(root,path2,n2))
        return NULL;
    
    int i;
    
    for(i=0;i<path1.size() && i<path2.size();i++)
    {
        if(path1[i]!=path2[i])
            break;
    }
    
    return path1[i-1];
}


//single traversal solution
Node *lca(Node *root, int n1, int n2)
{
    //Your code here
    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
        return root;

    Node *lca_left = lca(root->left, n1, n2);
    Node *lca_right = lca(root->right, n1, n2);

    if (lca_left && lca_right)
        return root;

    return (lca_left != NULL) ? lca_left : lca_right;
}