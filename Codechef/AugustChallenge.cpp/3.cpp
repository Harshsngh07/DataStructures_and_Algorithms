//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long c, r;
        cin >> c >> r;
        long long mc = ceil((double)c/9.0);
        long long mr = ceil((double)r/9.0);
        
        if(mr <= mc)
            cout << 1 << " " << mr <<endl;
        else
            cout << 0 << " " << mc << endl;
    }
}