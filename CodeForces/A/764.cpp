/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef long long ll;

int main()
{
    FIO;
    int n, m, z;
    cin >> n >> m >> z;
    int count(0);
    for (int i = m; i <= z; i += m)
    {
        if (i % n == 0)
            count++;
    }
    cout << count << endl;
}