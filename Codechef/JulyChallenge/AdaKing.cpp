//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        char ans[8][8];
        ans[0][0] = 'O';
        k--;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(i==0 && j==0)
                    continue;
                if(k)
                {
                    ans[i][j] = '.';
                    k--;
                }
                else
                    ans[i][j] = 'X';
            }
        }
        
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
}
