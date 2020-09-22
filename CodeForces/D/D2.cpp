/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fo(a, b) for (int i = a; i < b; i++)
#define vec vector<int>
#define vec_ll vector<long long>
#define stk stack<int>
#define stk_ll stack<long long>
#define set set<int>
#define set_ll set<long long>
#define u_set unordered_set<int>
#define u_set_ll unordered_set<long long>
#define map map<int, int>
#define map_ll map<long long, long long>
#define u_map unordered_map<int, int>
#define u_map_ll unordered_map<long long, long long>
#define pq priority_queue<int>
#define min_pq priority_queue<int, vector<int>, greater<int>>
#define pr pair<int, int>
#define pr_ll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    fo(0, n) cin >> a[i];

    sort(a, a + n);

    ll b[n] = {0};
    ll j = 0;

    for (ll i = 1; i < n; i += 2)
        b[i] = a[j++];

    for (ll i = 0; i < n; i++)
    {
        if (b[i] == 0)
            b[i] = a[j++];
    }

    ll count(0);

    for (ll i = 1; i < n - 1; i += 2)
    {
        if (b[i] < b[i - 1] && b[i] < b[i + 1])
            count++;
    }

    cout << count << endl;
    for (ll i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
}