//stack can be implemented in two ways
//1. Array
//2. Linkedlist

#include <bits/stdc++.h>
using namespace std;

#define max 100

class Stack
{
    int top;

public:
    int a[max];

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack ::push(int x)
{
    if (top >= max - 1)
    {
        cout << "Stack Overflow\n";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " pushed into the stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow\n";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{

    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << "element poped from the stack\n";
    return 0;
}