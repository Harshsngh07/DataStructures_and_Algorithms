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

