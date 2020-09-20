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
    FIO;
    int t;
    cin >> t;
    while (t--)
    {

        int n, k, l;
        cin >> n >> k >> l;
        if (k * l < n)
            cout << -1 << endl;
        else if (k == 1 && n > 1)
            cout << -1 << endl;
        else
        {
            int tmp(0);
            for (int i = 0; i < n; i++)
            {
                if (tmp == k)
                    tmp = 0;
                cout << ++tmp << " ";
            }
            cout << endl;
        }
    }
}