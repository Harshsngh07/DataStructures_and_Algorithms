//g++  5.4.0

#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int countE(0),countO(0);
        vector<int> v;
        vector<int> v1;

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                countE++;
                v.push_back(i+1);
            }
            else
            {
                countO++;
                v1.push_back(i+1);
            }
        }
        
        if(countE>=1)
        {
            cout<<countE<<endl;
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
        else if(countO>=2)
        {
            cout<<countO<<endl;
            for(int i=0;i<v1.size();i++)
                cout<<v1[i]<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
