class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans;
        deque<int> d;
        for (int i = 0; i < n; i++)
        {
            while (!d.empty() && nums[d.back()] <= nums[i])
                d.pop_back();
            d.push_back(i);

            if (d.front() <= i - k)
                d.pop_front();

            if (i >= k - 1)
                ans.push_back(nums[d.front()]);
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