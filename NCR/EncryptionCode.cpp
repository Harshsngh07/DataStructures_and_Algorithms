//partially correct
#include<bits/stdc++.h>
using namespace std;


int helper(string s)
{
    int ans(0);
    for(char c: s)
        ans = ans * 26 + (c-'A'+1);
    return ans;
}

int main()
{
   
        int n;
        cin >> n;
        vector<string> s;
        for(int i=0;i<n;i++)
        {
            string str;
            cin >> str;
            s.push_back(str);
        }
    
        vector<int> v;
        for(int i=0;i<s.size();i++)
        {
           int x =  helper(s[i]);    
           v.push_back(x); 
        }
        
    sort(v.begin(),v.end(),greater<int>());
    string res = "";

    
    for(int i=0;i<v.size();i++)
        res+=to_string(v[i]);
    cout << res;
    
}