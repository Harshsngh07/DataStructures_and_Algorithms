//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long int t;
    cin >> t;
    while(t--)
    {
        long long int n,q;
        cin >> n>>q;
        /*vector<string> s;
        string temp;
        cin >> temp;
        s.push_back(temp);*/
        
        string s; cin >> s;
        
        int a[q];
        for(int i=0;i<q;i++)
            cin >> a[i];
        
        int count(0),remP(0);
        int len = s.length();
        sort(s.begin(),s.end());

        for(int i=0;i<q;i++)
        {
            for(int j=0;j<a[i];j++)
            {
                count = distance(s.begin(),unique(s.begin(),s.begin() + len));
                remP = len - count;
            }
        }
        cout << len << " "<<count<< " "<<remP;
    }
    
}
