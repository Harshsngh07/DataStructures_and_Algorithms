class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        if(n==2 || n==1) return 1;
        
        vector<int> v(n+1);
        v[0] = 0;
        v[1] = 1;
        
        int x = n+1;
        x = x-2;
        x = x/2;
        
        for(int i=1;i<=x;i++)
        {
            int j = 2;
            while(j--)
            {
                v[2*i] = v[i];
                v[2*i + 1] = v[i] + v[i+1];
            }
        }
        
        int max = *max_element(v.begin(), v.end());
        
        return max;
    }
};