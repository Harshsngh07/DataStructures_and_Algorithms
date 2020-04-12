#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector<int> s;
    s.push_back(s1);
    s.push_back(s2);
    s.push_back(s3);
    s.push_back(s4);

    int count = 0;
    sort(s.begin(), s.end());
    count = distance(s.begin(), unique(s.begin(), s.begin() + s.size()));
    cout << 4 - count;
}