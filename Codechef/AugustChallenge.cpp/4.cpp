//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s, s1, s2;
        cin >> s1 >> s2;
        long long n = s1.size(), m=s2.size();
        long long a[27];
        memset(a, 0, sizeof(a));
        long long b[27];
        
        for(int i=0;i<n;i++)
            a[s1[i]-'a']++;
        
        for(int i=0;i<m;i++)
            a[s2[i]-'a']--;
        
        for(int i=0;i<26;i++)
            b[i] = a[i];
        
        for(int i=0;i<=(s2[0]-'a');i++)
        {
            while(a[i]>0)
            {
              s+=(char)(i+97);
              a[i]--;
            }
        }
        
        s += s2;
        
        for(int i=0;i<26;i++)
        {
            while(a[i]>0)
            {
                s+=(char)(i+97);
                a[i]--;
            }
        }
        
        string r;
        
        for(int i=0;i<s2[0]-'a';i++)
        {
            while(b[i]!=0)
            {
                r += (char)(i+97);
                b[i]--;
            }
        }
        
        r += s2;
        
        for(int i=0;i<26;i++)
        {
            while(b[i]!=0)
            {
                r += (char)(i+97);
                b[i]--;
            }
        }
        
        cout << min(s,r) << endl;
    }
}