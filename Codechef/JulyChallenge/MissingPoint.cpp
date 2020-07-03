//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a = 4*n-1;
        unordered_set<long long> x, y;
        while(a--)
        {
            long long m,n;
            cin >> m >> n;
            
            if(x.count(m))
                x.erase(m);
            else
                x.insert(m);
            
            if(y.count(n))
                y.erase(n);
            else
                y.insert(n);
        }
        
        cout<< *x.begin() << " " << *y.begin() << endl;
        
    }
}
