//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int count(0);
    vector<int> v;

    if (s.length() != t.length())
        cout << "NO" << endl;
    else
    {
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] != t[i])
            {
                if (count <= 1)
                {
                    count++;
                    v.push_back(i);
                }
            }
        }

        swap(s[v.front()], s[v.back()]);

        if (s == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}