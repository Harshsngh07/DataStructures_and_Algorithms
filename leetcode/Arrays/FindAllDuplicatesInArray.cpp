class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {

        map<int, int> m;
        map<int, int>::iterator it;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        vector<int> v;
        int ans(0);
        for (it = m.begin(); it != m.end(); ++it)
        {
            if (it->second == 2)
            {
                ans = it->first;
                v.push_back(ans);
            }
        }

        return v;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();