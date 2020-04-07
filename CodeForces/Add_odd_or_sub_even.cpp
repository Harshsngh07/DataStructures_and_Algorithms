#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int moves = 0;
        if (a > b)
        {
            int difference = 0;
            difference = abs(a - b);
            if (difference % 2 == 0)
            {
                a -= difference;
                moves++;
                cout << moves << endl;
            }
            else
            {
                difference++;
                moves++;
                a -= difference;
                moves++;
                cout << moves << endl;
            }
        }
        else if (a < b)
        {
            int difference = 0;
            difference = abs(a - b);
            if (difference % 2 == 0)
            {
                difference++;
                moves++;
                a += difference;
                moves++;
                cout << moves << endl;
            }
            else
            {
                a += difference;
                moves++;
                cout << moves << endl;
            }
        }
        else
            cout << moves << endl;
    }
}