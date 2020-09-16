#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int a[], int n)
{
    next_permutation(a, a+n);
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}

int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    for(ll i=0;i<n;i++) cin >> a[i];
	    solve(a,n);
	    cout << endl;
	}
	return 0;
}