//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count(0);
    int len = n.length();
    while (len > 1)
    {
        int sum(0);
        for (int i = 0; i < len; i++)
            sum += n[i] - '0';

        n = to_string(sum);
        len = n.length();
        count++;
    }
    cout << count << endl;
}