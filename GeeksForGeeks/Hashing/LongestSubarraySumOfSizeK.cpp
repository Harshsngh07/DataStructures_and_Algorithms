class Solution{
    public:
    int lenOfLongSubarr(int A[],  int n, int k) 
    { 
        // Complete the function
        int ans(0), sum(0);
        unordered_map<int, int> m;
        for(int i=0;i<n;i++)
        {
            sum += A[i];
            
            if(sum==k)
                ans = i+1;
                
            if(m.find(sum)==m.end())
                m[sum] = i;
                
            if(m.find(sum-k)!=m.end())
                ans = max(ans, i-m[sum-k]);
        }
        
        return ans;
    } 

};
