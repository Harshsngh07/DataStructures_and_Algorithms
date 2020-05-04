//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    int index = 0;
    vector<long long int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
   
    long int minVal = *min_element(v.begin(),v.end());
    vector<long long int > :: iterator it;
    it=find(v.begin(), v.end(), minVal);
    index  = it - v.begin();    
    
    sort(v.begin(),v.end());
    
    if(minVal == v[1])
        cout<<"Still Rozdil"<<endl;
    else
        cout<< index+1<<endl;
}
