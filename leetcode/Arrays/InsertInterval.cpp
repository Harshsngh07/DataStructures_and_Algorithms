class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &a, vector<int> &v)
    {
        a.push_back(v);
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

//Optimised Solution
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        int n = intervals.size(), i = 0;
        vector<vector<int>> res;

        while (i < n && intervals[i][1] < newInterval[0])
            res.push_back(intervals[i++]);

        while (i < n && newInterval[1] >= intervals[i][0])
        {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);
        while (i < n)
            res.push_back(intervals[i++]);
        return res;
    }
};