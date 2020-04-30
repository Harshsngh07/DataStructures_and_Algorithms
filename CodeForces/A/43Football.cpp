//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int count1(0),count2(0),temp(0);
    string s[n];
    for(int i = 0;i<n;i++)
        cin >> s[i];
    for(int i = 0;i<n;i++)
    {
        if(s[i]==s[0])
            count1++;
        else
        {
            temp = i;
            count2++;
        }
    }
    
    if(count1>count2)
        cout<<s[0];
    else
        cout<<s[temp];
}
