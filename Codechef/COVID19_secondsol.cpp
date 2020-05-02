//g++  5.4.0

#include <bits/stdc++.h>
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
            cin >> a[i];
        int count(1),count1(1);
        vector<int> v;
        vector<int> v1;
        for(int i=0;i<n;i++)
        {   
            count = 1;
            for(int j=i;j<n-1;j++)
                if(fabs(a[j]-a[j+1]<=2)
                    count++;
            
            v.push_back(count);
                   
            for(int j=i; j>0;j--)
                   if(fabs(a[j]-a[j-1])<=2)
                       count1++;
            v1.push_back(count1);
        }
    }
}
