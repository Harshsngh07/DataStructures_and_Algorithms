class Solution {
public:
    int findPoisonedDuration(vector<int>& a, int d) {
        int ans = 0;
        int n = a.size();
        if(n==0 || n==-1) return 0;
        
        for(int i=0;i<n-1;i++)
            ans += min(a[i+1]-a[i],d);
       
        return ans+d;
    }
};