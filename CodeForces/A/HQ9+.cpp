#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char h = 'H';
    char q = 'Q';
    char c = '9';

    size_t found1 = str.find(h);
    size_t found2 = str.find(q);
    size_t found3 = str.find(c);
    if (found1 != string::npos || found2 != string::npos || found3 != string::npos)
        cout << "YES";
    else
        cout << "NO";
}