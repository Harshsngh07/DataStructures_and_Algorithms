//g++  5.4.0

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i = 0;i<n;i++)
      cin >> str[i];


    for(int i = 0;i<n;i++){
     if(str[i].length()<=10) cout<<str[i]<<endl;
     else{
      int l = str[i].length();
      cout<<str[i].at(0)<<l-2<<str[i].at(l-1)<<endl;
    }
   }

}
