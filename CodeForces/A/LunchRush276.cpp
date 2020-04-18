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
    int n, k;
    cin >> n >> k;
    int a[n][2];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];

    int joy(0);
    vi v;
    for (int i = 0; i < n; i++)
    {
        if (a[i][1] > k)
        {
            joy = a[i][0] - (a[i][1] - k);
            v.PB(joy);
        }
        else
        {
            joy = a[i][0];
            v.PB(joy);
        }
    }
    cout << *max_element(v.begin(), v.end());
    return 0;
}