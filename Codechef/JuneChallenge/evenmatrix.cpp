//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int mat[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mat[i][j] = i*n + j + 1;

        for(int i=0;i<n;i++)
        {
            if(i%2 == 0)
            {
                for(int j = 0;j<n;j++)
                    cout<<mat[i][j] << " ";
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                    cout<<mat[i][j] << " ";
            }
            cout<<endl;
        }
    }
}