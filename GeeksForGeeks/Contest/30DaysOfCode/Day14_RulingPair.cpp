class Solution{
    
    public:
    int sumOfDigits(int a)
    {
        int sum(0);
        while(a>0)
        {
            sum+=a%10;
            a = a/10;
        }
        
        return sum;
    }
    
    
    int RulingPair(vector<int> arr, int n) 
    { 
    	vector<int> v;
        unordered_map<int,int>m;
        int ans(INT_MIN);
        for(int i=0;i<n;i++)
        {
            int x = sumOfDigits(arr[i]);
            if(!m.count(x)) m[x] = arr[i];
            else
                ans = max(ans, m[x]+arr[i]);
            m[x] = max(m[x], arr[i]); 
        }
       
        return ans>0?ans:-1;
    }   
};