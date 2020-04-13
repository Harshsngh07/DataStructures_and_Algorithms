#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result, newNo;
    result = pow(5, n);
    // cout << result << endl;
    vector<int> v;
    while (result > 0)
    {
        newNo = result % 10;
        v.push_back(newNo);
        result /= 10;
    }
    // cout << v.at(1) << v.at(0);
    cout << 25;
}