// was not able to solve in the contest
int ValidPair(int* array, int n) 
{ 
    int count(0);
    
    sort(array, array+n);
    for(int i=0;i<n;i++)
    {
        if(array[i]<=0) continue;
        
        int j = lower_bound(array,array+n, -array[i]+1)-array;
        count += i-j;
    }
    return count;
} 