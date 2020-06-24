node *minValueNode(node *Node)
{
    node *curr = Node;

    while (curr != NULL)
        curr = curr->left;

    return curr;
}

node *deleteNode(node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->key > key)
        root->left = deleteNode(root->left, key);

    else if (root->key < key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }

        node *temp = minValueNode(root->right);

        root->key = temp->key;

        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

struct node *changeKey(struct node *root, int oldVal, int newVal)
{
    root = deleteNode(root, oldVal);

    root = insert(root, newVal);

    return root;
}