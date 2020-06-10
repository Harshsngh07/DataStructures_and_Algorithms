//using another stack
void SortedStack :: sort()
{
   //Your code here
    stack<int> tmps;
    
    while(!s.empty())
    {
        int tmp = s.top();
        s.pop();
        
        while(!tmps.empty() && tmps.top()>tmp)
        {
            s.push(tmps.top());
            tmps.pop();
        }
        
        tmps.push(tmp);
    }
   
   tmps.swap(s);
}


//using recursion
void sortedInsert(stack<int> &s, int x)
{
    if (s.empty() or x > s.top())
    {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    sortedInsert(s, x);
    s.push(temp);
}

void SortedStack ::sort()
{
    if (!s.empty())
    {
        int x = s.top();
        s.pop();
        sort();
        sortedInsert(s, x);
    }
}