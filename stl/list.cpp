/*List are sequence containers that allow 
non-contiguous memory allocaion.As compared to
vector, list has slow traversal but once a position
has been found, insertion and deletion are quick.
Normally, when we say a list we talk about doubly
linked list. For implementing a singly linked list,
we use forward list.


Program to demonstrate the usage of list
*/

#include <bits/stdc++.h>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    list<int> list1, list2;
    for (int i = 0; i < 10; ++i)
    {
        list1.push_back(i * 2);
        list2.push_back(i * 3);
    }

    cout << "\nList1 is: ";
    printList(list1);

    cout << "\nList2 is: ";
    printList(list2);

    cout << "\n list1.front() is :" << list1.front();
    cout << "\n list1.back() is :" << list2.back();

    cout << "\nlist1.pop_front(): ";
    list1.pop_front();
    printList(list1);

    cout << "\n list.pop_back(): ";
    list2.pop_back();
    printList(list2);

    cout << "\n list1.reverse() ";
    list1.reverse();
    printList(list1);

    cout << "\n list2.reverse() ";
    list2.reverse();
    printList(list2);
}
