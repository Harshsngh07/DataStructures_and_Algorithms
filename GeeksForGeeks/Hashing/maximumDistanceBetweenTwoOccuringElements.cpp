int maxDistance(int arr[], int n)
{
    unordered_map<int,int> m;
    int maxD(0);
    
    for(int i=0;i<n;i++)
    {
        if(m.find(arr[i])==m.end())
            m[arr[i]] = i;
        else
            maxD = max(maxD, i-m[arr[i]]);
    }
    
    return maxD;
}