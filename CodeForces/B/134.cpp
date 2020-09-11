//Airport

/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fo(a, b) for (int i = a; i < b; i++)
#define vec vector<int>

typedef long long ll;

int main()
{

    int n, m;
    cin >> n >> m;
    int a[m];
    fo(0, m) cin >> a[i];
    int min(0), max(0);
    int y = n;
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq1;
    for (int i = 0; i < m; i++)
    {
        pq.push(a[i]);
        pq1.push(a[i]);
    }

    while (n--)
    {

        int x = pq.top();
        pq.pop();
        if (x > 0)
        {
            max += x;
            x--;
            pq.push(x);
        }
        else
            break;
    }

    while (y--)
    {
        int z = pq1.top();
        if (z > 0)
        {
            min += z;
            pq1.pop();
            z--;
            if (z > 0)
                pq1.push(z);
        }
        else
            pq1.pop();
    }

    cout << max << " " << min << endl;
}