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

void append(Node **head_ref, int new_data)
{
    //1.allocate node
    Node *new_node = new Node();

    Node *last = *head_ref;

    //2 put in the data
    new_node->data = new_data;

    //3 make the new node's next point to null
    new_node->next = NULL;

    //4 if the linked list is empty then make a new node as head
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    //5 else traverse the list till the last node
    while (last->next != NULL)
        last = last->next;

    //6 change the next of last node
    last->next = new_node;
}

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << " " << n->data;
        n = n->next;
    }
}

int main()
{
    //start with the empty list
    Node *head = NULL;

    //insert 6 linked list becomes 6->NULL
    append(&head, 6);

    //insert 7 at the beginning
    //sp linked list becomes 7-> 6 -> Null
    pushNode(&head, 7);

    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);

    cout << "Linkedlist is: ";
    printList(head);
}