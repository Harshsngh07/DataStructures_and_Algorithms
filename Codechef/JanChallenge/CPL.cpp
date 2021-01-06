#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], sum(0);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        
        if(sum < 2*k)
            cout << -1 << endl;
        else
        {
             int count(0), boxes(0);
             sort(arr, arr+n, greater<int>());
            
             while(count <= 2*k)
             {
                 count += arr[boxes];
                 boxes++;
             }
            cout << boxes << endl;
        }
        
        
    }
}