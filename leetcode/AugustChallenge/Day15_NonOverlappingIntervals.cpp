bool comp(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        if (n == 0)
            return 0;
        sort(intervals.begin(), intervals.end(), comp);
        int ans(-1);
        vector<int> prev = intervals[0];
        for (vector<int> x : intervals)
        {
            if (prev[1] > x[0])
                ans++;
            else
                prev = x;
        }

        return ans;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();