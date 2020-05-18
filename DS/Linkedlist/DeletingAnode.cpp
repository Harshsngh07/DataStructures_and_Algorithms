#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void deleteNode(Node **head_ref, int key)
{
    //store head node
    Node *temp = *head_ref, *prev;

    //if the given node has the key

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    //search the key to be deleted as we need to keep the track of the
    //key which is needed to be deleted and we need to change the prev-next

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    //if the key was not present in the linkedlist
    if (temp == NULL)
        return;

    //unlink the prev-next point to the temp->next

    prev->next = temp->next;
    free(temp);
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

int main()
{

    Node *head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    cout << "Created Linked list" << endl;
    printList(head);
    deleteNode(&head, 1);
    cout << "\nPrinting the linkedlist after deletion" << endl;
    printList(head);
}