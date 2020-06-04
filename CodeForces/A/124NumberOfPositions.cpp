//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int c = n-a;
    int d = b+1;
    
    if(d <= c)
        cout<<d;
    else
        cout<<c;
}