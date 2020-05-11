//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n>> m;
    int count(0);
    for(int b=0;b<=1000;b++)
    {
        for(int a = 0;a<=1000;a++)
        {
            if((a*a + b == n) && (a + b*b == m))
                count++;
        }
    }
        
    cout << count;
}
