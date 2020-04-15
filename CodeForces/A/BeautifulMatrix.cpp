#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    r = fabs(2 - r);
    c = fabs(2 - c);

    cout << r + c;
}
