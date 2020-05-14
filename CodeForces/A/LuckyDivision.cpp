//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>> n;
  bool ans=0;
    int arr[] = {4,7,47,44,77,74,444,777,774,747,447,474,477,744};
    
    for(int i=0;i<14;i++)
    {
       if(n%arr[i] == 0)
           ans = true;
    }
    
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
}
