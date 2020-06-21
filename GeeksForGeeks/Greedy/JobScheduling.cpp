bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}

pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    int res(0), count(0);
    
    sort(arr, arr+n, comparison);
    
    int result[n];
    bool slot[n];
    
    for(int i=0;i<n;i++)
        slot[i] = false;
    
    for(int i=0;i<n;i++)
    {
        for(int j=min(n, arr[i].dead)-1; j>=0; j--)
        {
            if(slot[j]==false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
            count++;
            res += arr[result[i]].profit;
        }    
    }
    
    return {count, res};
} 
