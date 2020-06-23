// recursive approach

bool search(Node* root, int k)
{
    if(root == NULL)
        return false;
    
    else if (root->data == k)
        return true;
    
    else if (root->data > k)
        search(root->left, k);
    
    else 
        search (root->right, k);

}


// iterative approach

bool search(Node* root, int k)
{
    while(root != NULL)
    {
        if(root->data == k)
            return true;
        else if (root->data > k)
            search(root->left, k);
        else
            search(root->right, k);
    }

    return false;
}