//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    long long int maxDiff(0),times(0),minVal(0),maxVal(0),freqMax(0),freqMin(0),ans(0);
    
    sort(a,a+n);
    maxVal = *max_element(a,a+n);
    minVal = *min_element(a,a+n);
    freqMax = count(a,a+n,maxVal);
    freqMin = count(a,a+n,minVal);
    
    maxDiff= a[n-1] - a[0];
    
    for(int i=0;i<n-1;i++)
        if(a[0]==a[i+1])
            times++;
    
    if(times+1 == n)
        ans = (n*(n-1)) /2;
    else
        ans = freqMax*freqMin;
        
    cout<<maxDiff<<" "<<ans<<endl;
    
}
