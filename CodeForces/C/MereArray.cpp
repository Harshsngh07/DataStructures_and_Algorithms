/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fo(a,b) for(int i=a;i<b;i++)
#define vec vector<int>

typedef long long ll;

int main()
{
    FIO;
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[n], b[n];
        fo(0,n) {cin >> a[i]; b[i]=a[i];}
        
       int minE = *min_element(a, a+n);
       sort(a,a+n); 
       int flag(0);
       for(int i=0;i<n;i++)
       {
          if(a[i]!=b[i] && a[i]%minE >0)
              flag = 1;
       }
        
       if(flag)
           cout << "NO" << endl;
       else
           cout << "YES" << endl;
    }
}