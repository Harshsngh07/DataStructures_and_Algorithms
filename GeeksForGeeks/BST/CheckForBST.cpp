int isBSTUtil(Node* node, int min, int max)
{
    if (node == NULL) return true;
    
    return ((node->data > min && node->data < max) && isBSTUtil(node->left, min, node->data) && isBSTUtil(node->right, node->data, max));
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    int min = INT_MIN;
    int max = INT_MAX;
    
    if(isBSTUtil(root, min, max))
        return 1;
    return 0;
}

// nicer solution inorder traversal solution
class Solution
{
public:
    bool Validate(TreeNode *node, TreeNode *&prev)
    {
        if (node == NULL)
            return true;
        if (Validate(node->left, prev) == false)
            return false;
        if (prev != NULL && node->val <= prev->val)
            return false;
        prev = node;
        return Validate(node->right, prev);
    }

    bool isValidBST(TreeNode *root)
    {
        TreeNode *prev = NULL;
        return Validate(root, prev);
    }
};