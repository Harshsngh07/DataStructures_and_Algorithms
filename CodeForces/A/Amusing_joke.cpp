 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,r,t;
    cin >> s>>r>>t;
    string sum_two = s+r;
    int len = sum_two.length();
    int len1 = t.length();
    sort(sum_two.begin(),sum_two.end());
    sort(t.begin(),t.end());
    if(sum_two == t)
        cout << "YES"<<endl;
    else
        cout<< "NO"<<endl;
}
