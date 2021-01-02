// partially correct
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, m;
        cin >> n >> m;
        int votes1[n], votes2[m];
        int sum1(0), sum2(0);
        for (int i = 0; i < n; i++)
        {
            cin >> votes1[i];
            sum1 += votes1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> votes2[i];
            sum2 += votes2[i];
        }

        int count(0);

        if (sum1 > sum2)
            cout << 0 << endl;
        else
        {
            sort(votes1, votes1 + n);
            sort(votes2, votes2 + m, greater<int>());
            int j(0), k(0);
            for (int i = 0; i < n; i++)
            {
                if (j < m)
                {
                    sum1 = sum1 - votes1[i] + votes2[j];
                    sum2 = sum2 - votes2[j] + votes1[i];
                    swap(votes1[i], votes2[j]);
                    j++;
                    k++;
                    if (sum1 > sum2)
                        break;
                }
            }

            if (sum1 < sum2)
                cout << -1 << endl;
            else
                cout << j << endl;
        }
    }
}