/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define for(a,b) for(int i=a;i<b;i++)
#define vec vector<int>

typedef long long ll;

int main()
{
    FIO;
    int n;
    cin >> n;
    int arr[n];
    for(0,n-1) cin >> arr[i];
    int a, b;
    cin >> a >> b;
    int ans(0);
    for(a,b) ans+=arr[i-1];
    cout << ans << endl;
}