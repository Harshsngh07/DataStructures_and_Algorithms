stack<int> _push(int arr[], int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
        s.push(arr[i]);
    return s;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int> s)
{
    std::vector<int> v;

    // while there is element in stack
    while (!s.empty())
    {
        // push the top element into the vector
        v.push_back(s.top());

        // pop the elment from stack
        s.pop();
    }

    stack<int> minStack;

    s.push(v.back());

    // pushing last element as min element
    minStack.push(v.back());

    // iterating vector from second last
    for (int i = v.size() - 2; i >= 0; i--)
    {
        s.push(v[i]);

        // compare the top element with minStack top
        // and then push the element if required
        if (s.top() < minStack.top())
            minStack.push(s.top());
        else
            minStack.push(minStack.top());
    }

    // print the minimum at every pop
    while (!s.empty())
    {
        cout << minStack.top() << " ";
        s.pop();
        minStack.pop();
    }
}