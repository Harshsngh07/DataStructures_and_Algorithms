//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count(0);
        int size = s.length();
        char prev = s[0];

        for (int i = 1; i < size; i++)
        {
            if (prev != s[i])
            {
                count++;
                prev = s[i + 1];
            }
        }

        cout << count << endl;
    }
}