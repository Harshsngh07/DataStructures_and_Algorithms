//Level order traversal or Breadth First Traversal.

#include <iostream>
#include <queue>
using namespace std;

//A binary tree node
struct Node
{
    int data;
    struct Node *left, *right;
};

// Utility function to create  new tree node

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

//Function to print Level Order Traversal of the binary tree

void printLevelOrder(Node *root)
{
    if (root == NULL)
        return;

    //create an empty queue for level order traversal
    queue<Node *> q;

    //Enqueue Root and initialize height
    q.push(root);

    while (q.empty() == false)
    {
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        //enqueue left child
        if (node->left != NULL)
            q.push(node->left);

        if (node->right != NULL)
            q.push(node->right);
    }
}

//Driver Code
int main()
{
    // Create the following Binary Tree
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "\n Level Order Traversal of the binary tree is\n";
    printLevelOrder(root);
}