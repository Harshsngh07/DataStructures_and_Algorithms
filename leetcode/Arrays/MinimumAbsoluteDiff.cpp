class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        vector<vector<int>> result;
        int minV = INT_MAX;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]<minV)
                minV = arr[i]-arr[i-1];
        }
        
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1]) == minV)
            {
                result.push_back({arr[i-1],arr[i]});
            }
        }
        return result;
    }
};
