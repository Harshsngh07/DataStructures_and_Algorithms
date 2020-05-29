class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        if (nums.size() == 0 || nums.size() == 1)
            return false;

        unordered_set<int> m;
        for (int i : nums)
            m.insert(i);

        if (m.size() == nums.size())
            return false;
        return true;
    }
};