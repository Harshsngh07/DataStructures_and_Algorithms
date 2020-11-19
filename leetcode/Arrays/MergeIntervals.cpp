//O(n) space O(1)
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &a)
    {
        sort(a.begin(), a.end());
        int i = 0, n = a.size();
        for (int j = 1; j < n; j++)
            if (a[j][0] > a[i][1])
                a[++i] = a[j];
            else
                a[i][1] = max(a[i][1], a[j][1]);
        while (--n > i)
            a.pop_back();
        return a;
    }
};

//O(nlogn)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>> mergeIntervals;
        if(a.size()==0) return mergeIntervals;
        sort(a.begin(), a.end());
        vector<int> temp = a[0];
        for(auto it: a)
        {
            if(it[0]<=temp[1])
                temp[1] = max(it[1], temp[1]);
            else
            {
                mergeIntervals.push_back(temp);
                temp = it;
            }
        }
        mergeIntervals.push_back(temp);
        return mergeIntervals;
    }
};