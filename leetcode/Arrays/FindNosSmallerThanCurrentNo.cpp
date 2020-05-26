class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {

        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            int count(0);
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                    count++;
            }
            v.push_back(count);
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