#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int submittedProblem = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] && (a[i][j + 1]) == 1)
            {
                submittedProblem++;
                //cout << submittedProblem << endl;
                //break;
            }
        }
    cout << submittedProblem << endl;
}