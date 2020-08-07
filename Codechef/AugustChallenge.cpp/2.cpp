//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        long long moves(0);
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            if(k % a[i] == 0)
            {
                int ele = a[i];
                moves = k/ele;
                v.push_back({moves,ele});
            }
        }
        
        sort(v.begin(),v.end());
        if(v.empty())
            cout << -1 << endl;
        else
            cout << v[0].second << endl;
    }
}