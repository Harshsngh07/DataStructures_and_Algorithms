
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x, y;
        cin >> n;
        int a[n];
        for ( x = 0; x < n; x++)
        {
            cin >> a[x];
            
        }
        if (n == 1)
            cout << a[0] << endl;
        else if (n == 2)
            cout << max(a[0], a[1]) << endl;
        else if(n==3)
        {
            sort(a,a+n);
            cout << max(a[0]+a[1],a[2])<<endl;           
        }
        else
        {
            sort(a,a+n);
             x = max(a[0]+a[3], a[2]+a[1]);
             y = max(a[0]+a[1]+a[2],a[3]);
            cout << min(x,y) << endl;
        }
        
    }
}