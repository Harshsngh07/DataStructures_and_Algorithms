string removeConsecutiveDuplicates(string s)
{
    // Your code here
    stack<char> st;
    int n = s.length();
    st.push(s[0]);
    for(int i=1;i<n;i++)
    {
        char x = st.top();
        if(x != s[i])
            st.push(s[i]);
    }
    string ans;
    while(!st.empty())
    {
        char x = st.top();
        st.pop();
        ans += x;
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}