// Like arrays, Linked List is a linear data structure.Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.
// linkedlist

// Why Linked List?
// Arrays can be used to store linear data of similar types, but arrays have the following limitations.
// 1) The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage.
// 2) Inserting a new element in an array of elements is expensive because the room has to be created for the new elements and to create room existing elements have to be shifted.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

// program to create a simple linkedlist with 3 nodes
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    //allocating 3 nodes in the heap

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;      //assigning data in the first node
    head->next = second; // linking first node with second node

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    //all the linked list are ready

    printList(head);

    return 0;
}