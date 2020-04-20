#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int x = n * q;
        vector<int> v;
        for (int i = 0; i < x; i++)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }

        int count(0);
        for (int i = 0; i < v.size() - 1; i++)
        {
            count += fabs(v[i] - v[i + 1]);
        }
        count += v[0] - 0;
        cout << count << endl;
    }
    return 0;
}
