#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *next;
};

void pushNode(Node **head_ref, int new_data)
{
    // 1. Allocating node
    Node *new_node = new Node();

    //put in the data
    new_node->data = new_data;

    //Make next of new node as head
    new_node->next = (*head_ref);

    //move the new node to point to the new node
    (*head_ref) = new_node;
}

void insertAfter(Node *prev_node, int new_data)
{
    // check if the previous node is not null
    if (prev_node == NULL)
    {
        cout << "Previous node cannot be Null";
        return;
    }

    //allocate new node

    Node *new_node = new Node();

    //put in the data

    new_node->data = new_data;

    //Make next of new node to point to the next of previous node
    new_node->next = prev_node->next;

    //make next of prev node point to the new node

    prev_node->next = new_node;
}

int main()
{
    Node *head = NULL;
}