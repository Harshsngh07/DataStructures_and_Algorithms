//g++  5.4.0

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
        int inf(1),notInf(0);
        set<int> v;
        set<int> ::iterator it;
        for(int i=0;i<n-1;i++)
        {
            if(fabs(a[i]-a[i+1])<=2)
                inf++;
            else if(fabs(a[i]-a[i+1])>=3)
            {
                if(inf>1)
                    v.insert(inf);
                inf = 1;
            }
            else
                notInf++;
           //cout<<inf<<endl;
                
        }
        for(it=v.begin();it!=v.end();it++)
            cout << *it << " ";
        int minEl = *min_element(v.begin(), v.end());
        //cout << minEl<<" "<<inf<<endl;
    }
}
