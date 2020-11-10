
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool helper(int a[], int n)
{
    int count(0);
    for (int i = 1; i < n; i++)
        if (a[i] == a[i - 1])
            count++;
    if (count + 1 == n)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum(0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (n == 1)
            cout << a[0] << endl;
        else if (n == 2)
            cout << max(a[0], a[1]) << endl;
        else if(n==3)
        {
            sort(a,a+n);
            cout << max(a[0]+a[1],a[2])<<endl;           
        }
        else
        {
            sort(a,a+n);
            i = max(a[0]+a[3], a[2]+a[1]);
            j = max(a[0]+a[1], a[2]+a[3]);
            cout << min(i,j) << endl;
        }
        
    }
}