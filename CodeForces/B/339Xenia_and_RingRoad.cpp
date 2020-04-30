//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,m;
    cin >> n>>m;
    long long  a[m];
    for(int i=0;i<m;i++)
        cin >> a[i];
    long long t = a[0]-1;
    for(int i=0;i<m-1;i++)
    {
        
        if(a[i]<=a[i+1])
            t += a[i+1]-a[i];
        else
            t += n-a[i] + a[i+1];
    }
    
    cout <<t;
   
}
