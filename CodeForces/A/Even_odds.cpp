//g++  5.4.0
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    long long int n,k;
    cin >> n>>k;
    if(k<=(n+1)/2)
        cout<< k * 2 -1<<endl;
    else
        cout<< (k-(n+1)/2)*2<<endl;  
 
}
