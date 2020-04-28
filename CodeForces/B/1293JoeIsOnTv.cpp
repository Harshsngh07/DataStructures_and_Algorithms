//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int  n;
   cin >> n;
    float t = n;
   float sum(0);
   while(n--)
   {
         sum += 1/t;
         t--;
   }
    cout <<fixed<<setprecision(12)<<sum; 
}
