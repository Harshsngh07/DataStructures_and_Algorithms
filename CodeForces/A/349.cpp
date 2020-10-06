//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int chng25(0), chng50(0), count(0);
    //vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
        {
            chng25++;
            count++;
        }
        else if (a[i] == 50 && chng25 >= 1)
        {
            chng50++;
            chng25--;
            count++;
        }
        else if (a[i] == 100 && (chng25 >= 3 || (chng25 >= 1 && chng50 >= 1)))
        {
            if (chng25 >= 1 && chng50 >= 1)
            {
                chng50--;
                chng25--;
            }
            else if (chng25 >= 3)
                chng25 -= 3;

            count++;
        }
    }

    if (count == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}