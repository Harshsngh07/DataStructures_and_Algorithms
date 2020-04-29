//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        long long int x,y,a,b,sum(0);
        cin >> x>>y>>a>>b;
        if(x>=y)
            swap(x,y);
        sum += (y-x)*a;
        if(2*a<=b)
           sum+=(2*a)*x;
        else
           sum+=x*b;
        cout << sum <<endl; 
    }
    
}
