//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    
    long long int count;
    
     while (n > 0) { 
          
        if (n % 10 == 4 || n%10 == 7) 
            count++; 
        n = n / 10; 
    } 
    
    if(count==4 || count==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
