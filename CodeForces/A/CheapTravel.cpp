//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,sum(0);
    cin>>n>>m>>a>>b;
    if(m*a<=b)
        sum = n*a;
    else
        sum = (n/m) * b + min((n%m)*a,b);
   
    cout<<sum;
         
}
