#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n; // no of stops for tram.
    cin >> n;
    int a[n], b[n]; // a = no of passengers exiting the tram and b = no of passengers boarding the tram
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int tram = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (tram >= 0)
        {
            tram -= a[i];
            tram += b[i];
            //cout << tram;
            v.push_back(tram);
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    cout << v.front();
}