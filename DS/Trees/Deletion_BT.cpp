//deletion in a binary tree

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left, *right;
};

struct Node *newNode(int key)
{
    struct Node *temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
};

void inorder(struct Node *temp)
{
    if (!temp)
        return;
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}

//function to delete the given deepest node

void deleteDeepest(struct Node *root, struct Node *d_node)
{
    queue<struct Node *> q;
    q.push(root);

    struct Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        if (temp->right)
        {
            if (temp->right == d_node)
            {
                temp->right = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->right);
        }

        if (temp->left)
        {
            if (temp->left == d_node)
            {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}

//function to delete the element in  binary tree

void deletion(struct Node *root, int key)
{
    queue<struct Node *> q;
    q.push(root);

    struct Node *temp;
    struct Node *key_node = NULL;

    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        if (temp->key == key)
            key_node = temp;
        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }

    int x = temp->key;
    deleteDeepest(root, temp);
    key_node->key = x;
}

//driver code
int main()
{
    // Create the following Binary Tree
    //            10
    //         /      \
    //        11       9
    //       /  \     / \
    //      7    12  15  8

    struct Node *root = newNode(10);
    root->left = newNode(11);
    root->left->left = newNode(7);
    root->left->right = newNode(12);
    root->right = newNode(9);
    root->right->left = newNode(15);
    root->right->right = newNode(8);

    cout << "Inorder traversal before deletion : ";
    inorder(root);

    int key = 11;
    deletion(root, key);

    cout << endl;
    cout << "Inorder traversal after deletion : ";
    inorder(root);
}