//Reversing a linked list

// for example
// 1->2->3->4->5->Null
// 5->4->3->2->1->NULL

//NULL
//NULL

//1->NULL
//1->NULL

#include <bits/stdc++.h>
using namespace std;

//Iterative method
//Intialize the three pointers i.e prev, current,next
//iterate through the list, and do the following

//before changing the current->next
//store next node
//next = curr->next
//current->next = prev
//prev = current
//current = next

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void reverse()
    {
        Node *current = head;
        Node *prev = NULL, *next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = prev;
        }

        head = prev;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << " " << temp->data;
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout << "Given linked list\n";
    ll.print();

    ll.reverse();

    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}