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
        int a, b, q;
        cin >> a >> b >> q;
        int count(0);
        while (q--)
        {
            long long l, r;
            cin >> l >> r;

            if (l > a && r > b)
            {
                for (int i = l; i <= r; i++)
                {
                    if ((i % a) % b != (i % b) % a)
                        count++;
                    else
                        continue;
                }
            }
            else if (l <= a && r > b)
            {
                count = 0;
                for (int i = b; i <= r; i++)
                {
                    if ((i % a) % b != (i % b) % a)
                        count++;
                }
            }
            else if (l > a && r <= b)
            {
                count = 0;
                for (int i = l; i >= r; --i)
                {
                    if ((i % a) % b != (i % b) % a)
                        count++;
                }
            }
            else
                count = 0;

            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}