//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int x,y,z,w;
        w = a+b;
        x = abs(a-b);
        y = c+d;
        z = abs(c-d);
        if((z <= x*n && x*n <= y) ||(z<= w*n && w*n<= y))
                    cout <<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        
    }
}
