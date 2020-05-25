class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        unordered_set<int> numbers;

        for (int i : nums)
            numbers.insert(i);

        nums.clear();
        for (int i = 1; i <= n; i++)
        {
            if (numbers.find(i) == numbers.end())
                nums.push_back(i);
        }
        return nums;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();