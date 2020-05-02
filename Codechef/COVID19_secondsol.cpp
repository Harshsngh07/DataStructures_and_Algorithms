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
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int count(1),count1(1);
        vector<int> v;
        vector<int> v1;
        for(int i=0;i<n;i++)
        {   
            count = 1;
            for(int j=i;j<n-1;j++)
            {
                if(fabs(a[j]-a[j+1])<=2)
                    count++;
                else
                   break;
            }

            for(int j=i; j>0;j--)
            {          
                   if(fabs(a[j]-a[j-1])<=2)
                       count++;
                   else
                       break;
            }
            v.push_back(count);
        }
              
          int minel = *min_element(v.begin(),v.end());
          int maxel = *max_element(v.begin(),v.end());
          cout << minel << " "<<maxel<<endl;
    }
}
