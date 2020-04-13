#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, hire = 0, Crime = 0, tmp;
    cin >> n;
    while (n--)
    {
        cin >> tmp;
        if (tmp > 0)
            hire += tmp;
        else if (hire > 0)
            hire--;
        else
            Crime++;
    }
    cout << Crime;
}