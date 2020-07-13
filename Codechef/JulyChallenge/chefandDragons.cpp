#include <bits/stdc++.h>
using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    FIO;
    long long n, q;
    cin >> n >> q;
    long long h[n], t[n];
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    while (q--)
    {
        long long a, b, c, ans(0);
        cin >> a >> b >> c;

        if (a == 1)
        {
            t[b] = c;
        }
        else if (a == 2 && b == c)
        {
            cout << -1;
            break;
        }
        else
        {
            if (a == 2 && b < c)
            {
                long long maxE = *max_element(h + b + 1, h + c + 1);

                if (maxE >= h[b])
                {
                    ans = -1;
                }
                else
                {
                    stack<pair<long long, long long>> s;
                    s.push({-1, -1});
                    for (int i = b + 1; i <= c; i++)
                    {
                        if (s.top().first <= h[i])
                        {
                            s.pop();
                            s.push({h[i], t[i]});
                        }
                    }

                    long long x(0);
                    while (!s.empty())
                    {
                        x = s.top().second;
                        s.pop();
                        ans += x;
                    }

                    if (x != t[c])
                        ans += t[b] + t[c];
                    else
                        ans += t[b];
                }
                cout << ans << endl;
            }
            else if (a == 2 && b > c)
            {
                long long maxE = *max_element(h + c, h + b);

                if (maxE >= h[b])
                {
                    ans = -1;
                }
                else
                {
                    stack<pair<long long, long long>> s;
                    s.push({-1, -1});
                    for (int i = b - 1; i >= c; i--)
                    {
                        if (s.top().first <= h[i])
                        {
                            s.pop();
                            s.push({h[i], t[i]});
                        }
                    }

                    long long x(0), y(0);
                    while (!s.empty())
                    {
                        x = s.top().second;
                        s.pop();
                        ans += x;
                    }
                    if (x != t[c])
                        ans += t[b] + t[c];
                    else
                        ans += t[b];
                }
                cout << ans << endl;
            }
        }
    }
}