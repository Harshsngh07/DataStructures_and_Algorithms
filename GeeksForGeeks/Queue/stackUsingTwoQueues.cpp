void QueueStack ::push(int x)
{
    // Your Code
    q2.push(x);

    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    queue<int> q = q1;
    q1 = q2;
    q2 = q;
}

/*The method pop which return the element poped out of the stack*/
int QueueStack ::pop()
{
    // Your Code
    if (q1.empty())
        return -1;
    int x = q1.front();
    q1.pop();
    return x;
}