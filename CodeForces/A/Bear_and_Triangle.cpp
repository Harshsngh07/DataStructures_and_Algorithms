#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
#define endl "\n"
#define sd(val) scanf("%d", &val)
#define ss(val) scanf("%s", &val)
#define sl(val) scanf("%lld", &val)
#define debug(val) printf("check%d\n", val)
#define all(v) v.begin(), v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val, 0, sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
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
    int x, y;
    cin >> x >> y;

    int val = abs(x) + abs(y);
    if (x > 0)
    {
        if (y > 0)
        {
            cout << " 0 " << val * (x > 0 ? 1 : -1) << " ";
            cout << val * (y > 0 ? 1 : -1) << " 0 ";
        }
        else
        {
            cout << " 0 " << val * (y > 0 ? 1 : -1) << " ";
            cout << val * (x > 0 ? 1 : -1) << " 0 ";
        }
    }
    else
    {
        if (y > 0)
        {
            cout << val * (x > 0 ? 1 : -1) << " 0 ";
            cout << " 0 " << val * (y > 0 ? 1 : -1);
        }
        else
        {

            cout << val * (y > 0 ? 1 : -1) << " 0 ";
            cout << " 0 " << val * (x > 0 ? 1 : -1) << " ";
        }
    }

    return 0;
}