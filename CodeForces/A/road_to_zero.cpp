#include <bits/stdc++.h>
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
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x >= y)
            swap(x, y);
        sum += (y - x) * a;
        if (2 * a <= b)
            sum += (2 * a) * x;
        else
            sum += x * b;
        cout << sum << endl;
    }

    return 0;
}