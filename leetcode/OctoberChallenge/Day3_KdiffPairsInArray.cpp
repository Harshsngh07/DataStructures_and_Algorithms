class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        int n = nums.size();
        int count(0);

        //check for duplicates when k==0
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[nums[i]]++;
        if (!k)
        {
            for (auto i : m)
                if (i.second > 1)
                    count++;
        }
        else
        {
            //for all other cases

            unordered_set<int> s;

            for (int i = 0; i < n; i++)
                s.insert(nums[i]);

            for (auto i : s)
            {
                if (s.find(k + i) != s.end())
                    count++;
            }
        }

        return count;
    }
};
