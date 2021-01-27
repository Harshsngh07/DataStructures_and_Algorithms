class Solution{
	public:
    	long long findNth(long long N)
    {
        long long ans = 0;
        long mul = 1;
        while(N!=0){
            long long dig = N%9;
            N = N/9;
            ans += (mul*dig);
            mul = mul * 10;
        }
        
        return ans;
    }
};