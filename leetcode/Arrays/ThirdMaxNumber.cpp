class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);

        set<int> s;
        for (int i = 0; i < n; i++)
            s.insert(nums[i]);
        nums.clear();
        for (auto i : s)
            nums.push_back(i);
        sort(nums.begin(), nums.end(), greater<int>());

        if (nums.size() >= 3)
            return nums[2];
        return nums[0];
    }
};

//better solution O(n)
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= first)
            {
                if (first == nums[i])
                {
                    continue;
                }
                else
                {
                    third = second;
                    second = first;
                    first = nums[i];
                }
            }
            else if (nums[i] >= second)
            {
                if (second == nums[i])
                {
                    continue;
                }
                else
                {
                    third = second;
                    second = nums[i];
                }
            }
            else if (nums[i] >= third)
            {
                third = nums[i];
            }
        }
        if (third == LONG_MIN)
        {
            return first;
        }
        else
        {
            return third;
        }
    }
};