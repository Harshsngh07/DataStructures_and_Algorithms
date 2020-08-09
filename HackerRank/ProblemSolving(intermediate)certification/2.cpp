//question Bitwise And
// got tle passed 5/15 testcases 
//complexity O(n^2) couldnt solve in O(n) solution

//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
    {
        return n <= 0 ? false : (n & (n - 1)) == 0;
    }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    
     long ans(0);
   
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x = (arr[i] & arr[j]);
            cout << x << " " ;
            if(isPowerOfTwo(x))
                ans++;
        }
    }

    cout <<"\n" <<ans;
}