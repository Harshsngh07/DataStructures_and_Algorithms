#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

struct Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

//helper function to find the height of the tree
int height(struct Node *node)
{
    if (node == NULL)
        return 0;

    return 1 + max(height(node->left), height(node->right));
}

int diameter(struct Node *tree)
{
    if (tree == NULL)
        return 0;

    int lheight = height(tree->left);
    int rheight = height(tree->right);

    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);

    return max(1 + lheight + rheight, max(ldiameter, rdiameter));
}

int main()
{

    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Diameter of tree is  " << diameter(root);
}