#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int tempMax = arr[0], tempMin = arr[0], minIndex = 0, maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (tempMax < arr[i])
        {
            tempMax = arr[i];
            maxIndex = i;
        }

        if (tempMin > arr[i])
        {
            tempMin = arr[i];
            minIndex = i;
        }
    }

    if (minIndex < maxIndex)

        cout << (maxIndex - 1) + (n - minIndex) - 1 << endl;
    else
    {
        cout << (maxIndex - 1) + (n - minIndex) << endl;
    }
}