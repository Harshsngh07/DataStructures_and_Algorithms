#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long
#define MOD 1000000007
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{

    OJ;
    int n, t;
    cin >> n >> t;
    char a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int j = n - 1;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'B' && a[i + 1] == 'G')
            {
                swap(a[i], a[i + 1]);
                i++;
            }
        }
        // if (i != n / 2)
        //     if (a[j - 1] == 'B' && a[j] == 'G')
        //     {
        //         swap(a[j - 1], a[j]);
        //         j--;
        //     }
    }
    for (int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}