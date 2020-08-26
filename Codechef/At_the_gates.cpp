#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define SS second
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        list<char> v;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            v.push_back(x);
        }
        list<char>::iterator it;
        for (auto it = v.begin(); it != v.end(); it++)
        {
            if (v.front() == 'H')
            {
                v.pop_front();
                v.advance(it,1)

            }
            else
        }

        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";
        cout << '\n';
        // cout << countH << endl;
    }

    return 0;
}