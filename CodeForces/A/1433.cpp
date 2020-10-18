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
#define st set<int>
#define st_ll set<long long>
#define u_set unordered_set<int>
#define u_set_ll unordered_set<long long>
#define mp map<int, int>
#define mp_c map<char, int>
#define mp_ll map<long long, long long>
#define u_map unordered_map<int, int>
#define u_map_ll unordered_map<long long, long long>
#define pq priority_queue<int>
#define min_pq priority_queue<int, vector<int>, greater<int>>
#define dq deque<int>
#define dq_ll deque<long long>
#define pr pair<int, int>
#define pr_ll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define nl endl

typedef long long ll;

int countDigits(int n)
{
    int count(0);
    while (n > 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s = to_string(x);
        int z = countDigits(x);
        int ans(0);
        s = s[0];
        int a = stoi(s);
        if (a > 1)
        {
            ans += (a - 1) * 10;
            if (z == 2)
                ans += 3;
            else if (z == 3)
                ans += 6;
            else if (z == 4)
                ans += 10;
            else
                ans += 1;
        }
        else if (a == 1)
        {
            if (z == 2)
                ans += 3;
            else if (z == 3)
                ans += 6;
            else if (z == 4)
                ans += 10;
            else
                ans += 1;
        }

        cout << ans << nl;
    }
}