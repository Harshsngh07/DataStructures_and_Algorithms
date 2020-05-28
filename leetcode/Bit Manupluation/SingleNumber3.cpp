class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int sum(0);

        for (auto i : nums)
            sum ^= i;

        int low_bit = sum & (-sum);
        vector<int> res{0, 0};

        for (auto i : nums)
        {
            if (i & low_bit)
                res[0] ^= i;
            else
                res[1] ^= i;
        }

        return res;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();