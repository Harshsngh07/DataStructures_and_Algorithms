#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i=0;i<n;i++)
            cin >> a[i];

        if (k==1)
        {
            unordered_map<int, int> m;

            for (int i=0;i<n;i++)
                m[a[i]]++;


            int ans(0), tables(0);
            for (auto it=m.begin();it!=m.end();it++)
            {
                if (it->second>1)
                    ans+= it->second;

            }

            map<int, int> m1;

            for (int i=0;i<n;i++)
            {
                if (m1.count(a[i]))
                {
                    tables++;
                    m1.clear();
                }
                m1[a[i]]++;

            }

            if (ans*k < ans+k)
                cout << min((tables+1)*k, ans*k) << endl;
            else
                cout << min((tables+1)*k, ans+k) << endl;

        }
        else
        {

            map<ll, ll> m;

            ll res(INT_MAX);
            ll mat[n+1][n+1] ={ 0 };

            for (int i=0;i<n;i++)
            {
                for (int j=0;j<n;j++)
                    mat[i][j]=0;
            }

            for (int i=0;i<n;i++)
            {
                m.clear();
                for (int j=i;j<n;j++)
                {
                    mat[i][j] = (j==0)?0:mat[i][j-1]; // can be plus or minus
                    if (m.count(a[j]))
                    {
                        if (m[a[j]]==1)
                            mat[i][j]++;
                        mat[i][j]++;
                    }
                    m[a[j]]++;
                }
            }


            ll cost = 100;
            ll dp[101][1001] ={ 0 };

            for (int i=0;i<=cost;i++)
                for (int j=0;j<=n;j++)
                    dp[i][j] = 0;


            for (int i=1;i<n+1;i++)
                dp[1][i] = mat[0][i-1]; // can be plus

            for (int i=2;i<=cost;i++)
                dp[i][1] = 0;

            for (int i=2;i<=cost;i++)
            {
                for (int j=2;j<=n;j++)
                {
                    ll ans = INT_MAX;
                    for (int k=1;k<j;k++)
                        ans = min(ans, dp[i-1][k] + mat[k][j-1]); // - can be plus
                    dp[i][j] = ans;
                }
            }

            for (cost = 1;cost<=100;cost++)
                res = min(cost*k+ dp[cost][n], res);

            cout << res << endl;

        }

    }
}


/////// both solution are accepted
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n+1];
        for (int i=0;i<n;i++)
            cin >> a[i];

        map<ll, ll> m;

        ll res(0);
        ll mat[n+1][n+1] ={ 0 };

        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
                mat[i][j]=0;
        }

        for (int i=0;i<n;i++)
        {
            m.clear();
            for (int j=i;j<n;j++)
            {
                mat[i][j] = (j==0)?0:mat[i][j-1]; // can be plus or minus
                if (m.count(a[j]))
                {
                    if (m[a[j]]==1)
                        mat[i][j]++;
                    mat[i][j]++;
                }
                m[a[j]]++;
            }
        }


        res = 1e18;
        ll cost = 100;
        ll dp[101][1001] ={ 0 };

        for (int i=0;i<=cost;i++)
            for (int j=0;j<=n;j++)
                dp[i][j] = 0;


        for (int i=1;i<n+1;i++)
            dp[1][i] = mat[0][i-1]; // can be plus

        for (int i=2;i<=cost;i++)
            dp[i][1] = 0;

        for (int i=2;i<=cost;i++)
        {
            for (int j=2;j<=n;j++)
            {
                ll ans = 1e18;
                for (int k=1;k<j;k++)
                    ans = min(ans, dp[i-1][k] + mat[k][j-1]); // - can be plus
                dp[i][j] = ans;
            }
        }

        for (cost = 1;cost<=100;cost++)
            res = min(cost*k+ dp[cost][n], res);

        cout << res << endl;

    }
}