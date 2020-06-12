//approach 1 in O(n) space

stack<int> ss;

/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(ss.size()==0)
        return -1;
   return ss.top();
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(ss.size()==0)
        return -1;
    
    int ans = s.top();
    s.pop();
    
    if(ss.top()==ans)
        ss.pop();
    return ans;
   
}



//approach 2 in O(1) space

int _stack :: getMin()
{
    if(s.empty())
        return -1;
    else
        return minEle;
}
int _stack ::pop()
{
    if(s.empty())
    {
        return -1;
    }
    int t = s.top();
    s.pop();
    if(t<minEle)
    {
      int k = minEle;
        minEle = 2*minEle-t;
        return k;

    }else
    return t;
}
void _stack::push(int x)
{
    if(s.empty())
    {
        minEle =x ;
        s.push(x);
        return ;
    }
    if(x<minEle)
    {
        s.push(2*x-minEle);
        minEle = x;
    }else
    s.push(x);
}
