//recursive approach

Node* insert(Node* root, int k)
{
    if(root==NULL)
        return newNode(k);
    
    else if (root->data > k)
        root->left = insert(root->left, k);
    else if (root->data < k)
        root->right = insert(root->right,k);

    return root;
}

//iterative approach

Node* insert(Node* root, int k)
{
    Node* temp = new Node(k);
    Node* parent = NULL , curr  = root;

    while(curr!=NULL)
    {
        parent = curr;
        if(curr->data > k)
            curr = curr->left;
        else if (curr->data < k)
            curr = curr->right;
        else 
            return root;
        
    }

    if(parent == NULL)
        return temp;
    if(parent->data > k)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}