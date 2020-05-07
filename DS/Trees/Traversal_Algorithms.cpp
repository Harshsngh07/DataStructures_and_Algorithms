//It contains all the traversal algorithms of trees i.e Inorder, Preorder, Postorder traversals.

#include <iostream>
using namespace std;

// A binary tree node has date, pointer to the left child,
// pointer to the right child.

struct Node
{

    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

//Code for Inorder Traversal

void printInorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    //first recur on left subtree
    printInorderTraversal(node->left);

    //deal with root node
    cout << node->data << " ";

    //first recur of right subtree
    printInorderTraversal(node->right);
}

//code for preorder traversal

void printPreorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    //deal with the root node
    cout << node->data << " ";

    //first recur of left subtree
    printPreorderTraversal(node->left);

    //first recur of right subtree
    printPreorderTraversal(node->right);
}

//code for postorder Traversal

void printPostorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    //first recur of left subtree
    printPostorderTraversal(node->left);

    //first recur of right subtree
    printPostorderTraversal(node->right);

    //deal with the root node
    cout << node->data << " ";
}

//driver code

int main()
{

    //      construct the tree
    //         1
    //       /   \
//      2     3
    //     / \
//    4   5

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Ineorder traversal of the binary tree is \n";
    printInorderTraversal(root);

    cout << "\nPreorder traversal of the binary tree is \n";
    printPreorderTraversal(root);

    cout << "\nPostorder traversal of the binary tree is \n";
    printPostorderTraversal(root);
}