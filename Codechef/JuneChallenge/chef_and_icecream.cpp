//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int chng5(0), chng10(0), count(0);
        //vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 5)
            {
                chng5++;
                count++;
            }
            else if (a[i] == 10 && chng5 >= 1)
            {
                chng10++;
                chng5--;
                count++;
            }
            else if (a[i] == 15 && (chng5 >= 2 || chng10 >= 1))
            {
                if (chng10 >= 1)
                    chng10--;
                else if (chng5 >= 2)
                    chng5--;

                count++;
            }
        }

        if (count == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}