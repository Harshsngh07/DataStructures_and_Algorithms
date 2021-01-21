class Solution
{
public:
    vector<int> mostCompetitive(vector<int> &nums, int k)
    {
        vector<int> v;

        int rem = nums.size() - k;

        for (auto i : nums)
        {
            while (v.size() && rem && i < v.back())
            {
                v.pop_back();
                rem--;
            }
            v.push_back(i);
        }

        while (rem)
        {
            v.pop_back();
            rem--;
        }
        return v;
    }
};