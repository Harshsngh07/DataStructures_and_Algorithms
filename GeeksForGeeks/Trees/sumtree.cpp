//O(n^2) solution

int sum(Node* root)
{
    if(root==NULL) return 0;

    return root->left+root->data+root->right;
}


bool isSumTree(Node* root)
{
    if(root == NULL || root->left == NULL || root->right ==NULL)
        return 1;
    
    int ls = sum(root->left);
    int rs = sum(root->right);

    if(root->data == ls+rs && isSumTree(root->left && isSumTree(root->right))
        return 1;
    return 0;
}





//O(n) solution
int isLeaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;
    return 0;
}

bool isSumTree(Node *root)
{
    int ls, rs;

    if (root == NULL || isLeaf(root))
        return 1;

    if (isSumTree(root->left) && isSumTree(root->right))
    {
        if (root->left == NULL)
            ls = 0;
        else if (isLeaf(root->left))
            ls = root->left->data;
        else
            ls = 2 * (root->left->data);

        if (root->right == NULL)
            rs = 0;
        else if (isLeaf(root->right))
            ls = root->right->data;
        else
            ls = 2 * (root->right->data);

        return (root->data == ls + rs);
    }

    return 0;
}