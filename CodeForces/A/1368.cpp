//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,n;
        cin >> a>> b>> n;
        
        int count (0);
        while(max(a,b)<=n)
        {
            if(a>b)
                swap(a,b);
            a += b;
            count++;
        }
        
        cout << count << endl;
    }
}