//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

bool check(string s, string c)
{
    map<char, int> m;
    for(int i=0;i<s.length();i++)
        m[s[i]]++;
    for(int i=0;i<c.length();i++)
        m[c[i]]--;
    
    for(auto it = m.begin();it!=m.end();it++)
        if(it->second!=0)
            return false;
    return true;
}

int countNoOfAnagrams(string s, string c)
{
    int count(0);
    
    for(int i=0;i<s.length()-c.length()+1;i++)
        if(check(s.substr(i,c.length()),c))
            count++;
    return count;
}

int main()
{
    string s="fororfrdofr";
    string c="for";
    cout<<countNoOfAnagrams(s,c);
}