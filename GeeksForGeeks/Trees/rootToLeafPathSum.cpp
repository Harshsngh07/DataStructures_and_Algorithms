bool hasPathSum(Node *root, int sum)
{
    if (root == NULL)
        return false;

    if (root->left == NULL && root->right == NULL && sum - root->data == 0)
        return true;
    return hasPathSum(root->left, sum - root->data) || hasPathSum(root->right, sum - root->data);
}