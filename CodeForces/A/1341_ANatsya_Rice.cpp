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
        int x = n*(a-b), y=n*(a+b);
        if(y<c-d || x>c+d)
                cout <<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        
    }
}
