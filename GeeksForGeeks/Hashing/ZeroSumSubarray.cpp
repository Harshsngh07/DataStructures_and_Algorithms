ll findSubarray(vector<ll> arr, int n ) {
    //code here
    ll count(0);
    ll sum(0);
    unordered_map<int, int> m;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
            count++;
        if(m.find(sum)!=m.end())
            count+=m[sum];
        m[sum]++;
    }
    return count;
}
