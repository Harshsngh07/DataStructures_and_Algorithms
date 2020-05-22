void leftViewUtil(Node *root, int level, int *maxlevel)
{
    if (root == NULL)
        return;

    if (*maxlevel < level)
    {
        cout << root->data << " ";
        *maxlevel = level;
    }

    leftViewUtil(root->left, level + 1, maxlevel);
    leftViewUtil(root->right, level + 1, maxlevel);
}

// A wrapper over leftViewUtil()
void leftView(Node *root)
{
    // Your code here
    int maxlevel(0);
    leftViewUtil(root, 1, &maxlevel);
}
