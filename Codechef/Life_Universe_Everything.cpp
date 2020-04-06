#include <bits/stdc++.h>
using namespace std;
// #define MAX 1000000000000

int main()
{
    long int arr[100];
    for (int i = 0; i < 100; i++)
        cin >> arr[i];
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] != 42)
            cout << arr[i] << endl;
        else
            break;
    }
}
