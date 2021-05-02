#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) 
{
        int i = 0, j = 0;
        if(s.length()==0 && t.length()==0) return true;
        while(j<t.length())
        {
            if(s[i]==t[j]) i++;
            if(i==s.length()) return true;
            j++;
        }
        return false;
}

int main()
{
    string v;
    cin >> v;
    int n;
    cin >> n;
    string b[n];
    for(int i=0;i<n;i++)
        cin >> b[i];

    for(int i=0;i<n;i++)
    {
        if(isSubsequence(b[i],v))
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl; 
    }
}