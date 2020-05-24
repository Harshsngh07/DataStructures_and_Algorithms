class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v;
        int sum;
        for (int i = 0; i < nums.size(); i++)
        {
            v.clear();
            sum = target - nums[i];
            v.push_back(i);
            for (int j = i + 1; j < nums.size(); j++)
            {

                if (sum == nums[j])
                {
                    v.push_back(j);
                    break;
                }
            }

            if (v.size() == 2)
                break;
        }
        return v;
    }
};