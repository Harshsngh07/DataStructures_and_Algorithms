// The below code only passes the first subtask hence a partial solution.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x,y,z;
        cin >> x>>y>>z;
        int a;
        a = (x&z)*(y&z);
        cout << a;
    }
}
