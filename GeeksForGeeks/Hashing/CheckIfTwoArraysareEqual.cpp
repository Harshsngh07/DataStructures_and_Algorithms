bool check(vector<ll> arr, vector<ll> brr, int n) {
    //code here
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=brr[i])
            return 0;
    }
    return 1;
}