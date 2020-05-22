void rightViewUtil(Node *root, int level, int *maxlevel)
{
    if (root == NULL)
        return;

    if (*maxlevel < level)
    {
        cout << root->data << " ";
        *maxlevel = level;
    }

    rightViewUtil(root->right, level + 1, maxlevel);
    rightViewUtil(root->left, level + 1, maxlevel);
}

// Should print right view of tree
void rightView(Node *root)
{
    int maxlevel(0);
    rightViewUtil(root, 1, &maxlevel);
}