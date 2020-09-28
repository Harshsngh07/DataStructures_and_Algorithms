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

int solve(int a[], int n, int k)
{
    int minIdx = min_element(a,a+n)-a;
    int ans(0);
    for(int i=0;i<n;i++)
    {
        if(i!=minIdx)
        {
            while(a[i]+a[minIdx]<=k)
            {
               a[i]+=a[minIdx];
               ans++;
            }
        }
    }
    return ans;
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        fo(0,n) cin >> a[i];
        cout << solve(a,n,k)<<endl;
    }
}