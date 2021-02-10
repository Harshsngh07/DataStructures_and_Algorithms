class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        string ans ="";
        if(k==1) return "";
        stack<pair<char,int>> st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else if(st.top().first == s[i])
            {
                st.push({s[i], st.top().second+1});
                int x = st.top().second;
                if(x==k)
                {
                    while(x--) st.pop();
                }
            }
            else if(st.top().first!=s[i])
                st.push({s[i],1});
                
        }
        
        while(!st.empty())
        {
                ans += st.top().first;
                st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }


};