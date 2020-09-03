/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main()
{
    FIO;
    int n;
    cin >> n;
    set<int> s;
    for(int i=1;i<=500;i++)
    {
        int x = i*(i+1)/2;
        s.insert(x);
    }
    
    if(s.find(n)!=s.end())
        cout << "YES" <<endl;
    else
        cout << "NO"<<endl;
    
}