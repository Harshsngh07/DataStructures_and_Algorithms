void rightViewUtil(Node *root, int level, int *maxLevel)
{
    if (root == NULL)
        return;

    if (*maxLevel < level)
    {
        cout << root->data << " ";
        *maxLevel = level;
    }

    rightViewUtil(root->right, level + 1, maxLevel);
    rightViewUtil(root->left, level + 1, maxLevel);
}

void rightView(Node *root)
{
    int maxLevel = 0;
    rightViewUtil(root, 1, &maxLevel);
}