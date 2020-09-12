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
    int n;
    cin >> n;
    int a[n][3];
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin >> a[i][j];
    
   int x(0), y(0), z(0);
   
   for(int i=0;i<n;i++)
   {
       x += a[i][0];
       y += a[i][1];
       z += a[i][2];
   }
   cout << x << " " << y << " "<< z;  
   if(x==0 && y ==0 && z == 0)
       cout << "YES" <<endl;
    else
        cout << "NO" << endl;
}