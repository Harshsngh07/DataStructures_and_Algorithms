class Solution
{
public:
    int bs(const vector<int> &v)
    {
        int start(0);
        int n = v.size();
        int end = n - 1;
        if (v[0] < 0)
            return n;
        if (v.back() >= 0)
            return 0;
        while (start < end)
        {
            int mid = start + (end - start) / 2;

            if (v[mid] < 0)
                end = mid;
            else
                start = mid + 1;
        }

        return n - start;
    }

    int countNegatives(vector<vector<int>> &grid)
    {
        int ans(0);

        for (const auto &v : grid)
            ans += bs(v);

        return ans;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();