#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
        if (arr[i])
        {
            count++;
            // cout << count << endl;
        }
        if (arr[i] * (i + 1) * (n - i) != 0)
        {
            //cout << arr[i + 1] << endl;
            count++;
            cout << "im" << count << endl;
        }
    }
    // if (sum == 0)
    //     cout << "not good";
    cout << "total count = " << count;
}