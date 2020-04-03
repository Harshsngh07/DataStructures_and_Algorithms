#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count_one = {0}, count_two = {0};
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count_one++;
            cout << "HARD";
            break;
        }
        else
        {
            count_two++;
        }
    }
    if (count_two > 0 && count_one == 0)
        cout << "EASY";
}