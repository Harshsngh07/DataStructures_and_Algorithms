/* AtCoder DP Educational Contest
    Problem C - Vaction
    By - Harsh Singh
*/

#include <bits/stdc++.h>
using namespace std;

int dp[100001];
int solve(int n, int a[][3])
{   
    int sum(0), temp(-1),temp1(-1), maxE = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(maxE < a[i][j] && temp1!=j)
            {
                maxE = a[i][j];
                temp = j;
            }
        }
        sum += maxE;
        maxE = INT_MIN;
        temp1 = temp;
    }
    return sum;
}

int main()
{
     int n;
     cin >> n;
     int a[n][3];
     for(int i=0;i<n;i++) 
         for(int j=0;j<3;j++)
             cin >> a[i][j];
         
     cout << solve(n,a) << endl;   
}