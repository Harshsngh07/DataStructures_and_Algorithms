class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ans = INT_MIN;
        int x(0);
        for(int i=0;i<n;i++)
        {
             x += gain[i];
            ans = max(ans, x);
        }
        
        return ans<0 ? 0 : ans;
    }
};