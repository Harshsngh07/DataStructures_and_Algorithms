//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3,c4,c5,sum(0);
    cin>>c1>>c2>>c3>>c4>>c5;
    sum = c1+c2+c3+c4+c5;
    if(sum >0 && sum%5==0)
        cout<<sum/5;
    else
        cout<<-1;
   
}
