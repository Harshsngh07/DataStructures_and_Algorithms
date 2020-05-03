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
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[100000232] = 1;

    map<char, int> cnt;
    string x = "harsh singh";

    for (char c : x)
    {
        cnt[c]++;
    }
    cout << cnt['a'] << " " << cnt['z'] << endl;

    return 0;
}