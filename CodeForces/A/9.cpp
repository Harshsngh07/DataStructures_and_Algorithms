/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fo(a, b) for (int i = a; i < b; i++)
#define vec vector<int>

typedef long long ll;

int main()
{
    FIO;
    int y, w;
    cin >> y >> w;
    int maxE = max(y, w);
    string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << probability[maxE] << endl;
}