class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int n = nums.size();

        int sum(0);
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            m[sum] = i;
        }

        if (x > sum)
            return -1;

        int longest(0);
        sum -= x;
        m[0] = 0;
        int val(0);

        for (int i = 0; i < n; i++)
        {
            val += nums[i];
            if (m.count(val - sum))
            {
                if ((val - sum) == 0)
                    longest = max(longest, i - m[val - sum] + 1);
                else
                    longest = max(longest, i - m[val - sum]);
            }
        }

        return longest == 0 ? (sum == 0 ? n : -1) : n - longest;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();