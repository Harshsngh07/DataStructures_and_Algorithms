//g++  5.4.0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int m; cin >> m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    
    sort(a,a+n);
    sort(b,b+m);
    
    int count(0);
    int i(0),j(0);
    while(i<n && j<m)
    {
           if(abs(a[i]-b[j])<=1)
           {
               count++; 
               i++;
                j++;
           }
           else if (a[i]-b[j]<0)
                   i++;
           else
                   j++;
        }
    cout<<count<<endl;
}
