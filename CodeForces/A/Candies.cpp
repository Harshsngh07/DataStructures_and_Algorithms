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

    FIO;
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 3;
        for (int i = 3; n % x != 0; i++)
            x = pow(2, i) - 1;
        cout << n / x << endl;
    }

    return 0;
}