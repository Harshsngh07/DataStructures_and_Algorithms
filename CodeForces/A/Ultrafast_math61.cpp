#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int len = a.size();
    vector<char> v1(a.size());
    vector<char> v2(b.size());
    copy(a.begin(), a.end(), v1.begin());
    copy(b.begin(), b.end(), v2.begin());

    for (int i = 0; i < len; i++)
    {
        if (v1[i] == v2[i])
            cout << "0";
        else
            cout << "1";
    }
}