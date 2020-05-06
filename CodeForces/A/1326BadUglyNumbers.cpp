//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;


int main()
{ 
      int t;
    cin >> t;
    while(t--)
    {
        long long int n;
         cin >> n;
         vector<long long> v;
        for(int i=0;i<n-1;i++)
        {
            v.push_back(3);
        }
        v.insert(v.begin(),2);
        if(n==1)
            cout << -1<<endl;
        else
        {
        
            for(int i=0;i<n;i++)
                cout<<v[i];
            cout<<endl;
        }
    }
}
