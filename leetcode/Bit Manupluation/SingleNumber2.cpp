
//I didnt understand this solution
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int res = 0;
        for (int i = 0; i < 32; ++i)
        {
            int count = 0;
            for (auto num : nums)
            {
                count += (num >> i) & 1;
            }
            res |= (count % 3) << i;
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