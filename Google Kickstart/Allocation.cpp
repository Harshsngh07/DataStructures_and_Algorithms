#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x =1;
    while(t--)
    {
        int n,b;
        cin >> n>>b;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int sum(0),count(0);
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            sum+=a[i];   
            if(sum<=b)
                count++;    
        }
        
        cout<<"Case #"<<x<<":" <<" "<<count<<endl;
        x++;
    }
}
