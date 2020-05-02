//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;


void isDistinct(int n)
{
    int num,x;
    for(int i=n+1;i<=10000;i++)
    {
        num = i;
        bool visited[10] = {false};
        while(num)
        {
            if(visited[num%10])
                break;
            visited[num%10] = true;
            
            num/=10;
        }
         if(num == 0)
         {
                x = i;
             break;
         }
    }
    cout << x;
}


int main()
{
    int y;
    cin >> y;
    isDistinct(y);
}
