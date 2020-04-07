#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    long long int t, n;
    cin >> t >> n;

    while (t--)
    {
        long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count_one = 0, count_yes = 0, count_no = 0;
        vector<int> newArray;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count_one++;
                newArray.push_back(i);
            }
        }
        for (int i = 0; i < count_one; i++)
        {
            // cout << abs(newArray[i] - newArray[i + 1]) << endl;
            if (abs(newArray[i] - newArray[i + 1]) < 6)
                //count_yes++;
                count_no++;
        }
        //  cout << count_one << endl;
        // cout << count_yes << endl;
        // cout << count_no << endl;
        if (count_no > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    // if (count_one == count_yes + 1)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
}