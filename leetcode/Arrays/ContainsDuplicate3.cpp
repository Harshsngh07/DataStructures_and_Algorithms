class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<vector<int>> v;
        
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {  
            for(int j=i+1;j<v.size();j++)
            {    
                if((long long)v[j][0]>(long long)v[i][0]+t) break;
                if(abs(v[j][1]-v[i][1])<=k) return 1;
            }
        }
        return 0;
    }
};