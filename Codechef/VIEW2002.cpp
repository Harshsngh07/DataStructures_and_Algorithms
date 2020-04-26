//g++  5.4.0

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin >> x1>>y1>>x2>>y2;
        int x = 0, y = 0;
        float a = sqrt(pow((x1-x),2)+ pow((y1-y),2));
        float b = sqrt(pow((x2-x),2)+ pow((y2-y),2));
        
        if(a<b)
            cout<<"A IS CLOSER"<<endl;
        else
            cout <<"B IS CLOSER"<<endl;
        
    }
}
