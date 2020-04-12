#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> count;

    for (int i = 0; i < s.length(); i++)
        if (isalpha(s[i]))
            count.insert(s[i]);

    cout << count.size();
}