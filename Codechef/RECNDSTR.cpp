//g++  5.4.0

#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,sl,sr;
        cin>>s;
        int l = s.length();
        sl = s;
        sr = s;
        char last = s[l-1];
        char f = s[0];
        sl.erase(sl.begin());
        sl+=f;
        sr.erase(sr.end()-1);
        sr = last+sr;
        if(sl == sr)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
       
        
    }
}
