class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int i(0), j(n-1);
        sort(nums.begin(),nums.end());
        int count(0);
        while(i<j)
        {
            int x = nums[i]+nums[j];
            if(x==k)
            {
                i++;
                j--;
                count++;
            }
            else if(x>k)
                j--;
            else
                i++;
        }
        
        return count;
    }
};