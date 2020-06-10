
#include <bits/stdc++.h>
using namespace std;

struct compare
{
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;

        return p1.second < p2.second;
    }
};

void mostFrequentNumber(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    vector<pair<int, int>> freq_arr(m.begin(), m.end());

    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   compare>
        pq(m.begin(), m.end());

    for (int i = 1; i <= k; i++)
    {
        cout << pq.top().first << " ";
        pq.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k;
        cin >> k;

        mostFrequentNumber(a, n, k);
        cout << endl;
    }
}