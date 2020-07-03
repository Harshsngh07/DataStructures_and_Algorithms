//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
   int sum(0);
   while(n>0)
   {
       sum+= n%10;
       n/=10;
   }
        
   return sum;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long A, B, C(0),D(0);
        while(n--)
        {
            cin >> A >> B;
            int x = sumOfDigits(A);
            int y = sumOfDigits(B);
            
            if(x>y)
                C++;
            else if (x<y)
                D++;
            else if (x==y)
            {
                C+=1;
                D+=1;
            }
        }
        
        if(C>D)
            cout << 0 << " " << C << endl;
        else if (C<D)
            cout << 1<< " " << D << endl;
        else if (C==D)
            cout << 2 << " " << C << endl;
    }
}
