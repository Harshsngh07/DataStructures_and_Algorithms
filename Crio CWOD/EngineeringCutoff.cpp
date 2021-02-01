#include <bits/stdc++.h>
using namespace std;

vector<int> engineeringCutoff(int n, vector<vector<int>> &marks)
{
    vector<vector<int>> v;
    int flag, total, sum;
    for (auto &u : marks)
    {
        flag = 0;
        total = 0;
        sum = 0;
        for (int i = 1; i <= 5; i++)
        {
            if (u[i] < 35)
            {
                flag = 1;
                break;
            }
            total += u[i];
            if (i < 4)
                sum += u[i];
        }
        if (!flag)
            v.emplace_back(vector<int>{sum, total, u[0]});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<int> ans;
    for (auto &u : v)
    {
        ans.emplace_back(u[2]);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> marks(n);
    int id, s0, s1, s2, s3, s4;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> s0 >> s1 >> s2 >> s3 >> s4;
        marks[i] = {id, s0, s1, s2, s3, s4};
    }
    vector<int> ans = engineeringCutoff(n, marks);
    for (int j : ans)
    {
        cout << j << " ";
    }
    cout << "\n";
}
