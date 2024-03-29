int max_sum(int A[],int n)
{
//Your code here
      int cum_sum = 0;
        for(int i=0;i<n;i++)
            cum_sum += A[i];
        
        int curr_val = 0;
        for(int i=0;i<n;i++)
            curr_val += i*A[i];
        
        int res = curr_val;
        
        for(int i=1;i<n;i++)
        {
            int next_val = curr_val - (cum_sum - A[i-1]) + A[i-1]*(n-1);
            
            curr_val = next_val;
            
            res = max(res, next_val);
        }
    
    
    return res;
}