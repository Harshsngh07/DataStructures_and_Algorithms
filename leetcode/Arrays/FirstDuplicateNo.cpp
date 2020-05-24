class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> m;
        map<int, int>::iterator it;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        int ans(0);
        for (it = m.begin(); it != m.end(); ++it)
        {
            if (it->second > 1)
            {
                ans = it->first;
                break;
            }
        }

        return ans;
    }
};