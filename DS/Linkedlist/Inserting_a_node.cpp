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

int main()
{
    Node* head = NULL;
    

    }