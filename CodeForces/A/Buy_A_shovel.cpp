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
    int k, r;
    cin >> k >> r;
    int total(0), count(1);
    for (int i = 1; i < 100; i++)
    {
        total = k * i;
        if (total % 10 == r)
            break;
        else if (total % 10 == 0)
            break;
        else
            count++;
    }
    cout << count;
    return 0;
}