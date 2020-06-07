#include <bits/stdc++.h>
using namespace std;

bool check(string str, int n)
{
    stack<char> s;
    char x;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (str[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '[' || x == '{')
                return false;
            break;

        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;

        case '}':
            x = s.top();
            s.pop();
            if (x == '[' || x == '(')
                return false;
            break;
        }
    }
    return (s.empty());
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.length();

        if (check(s, size))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}