class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;
        queue<vector<int>> permutations;
        permutations.push(vector<int>());
        for (auto num : nums)
        {
            int n = permutations.size();
            for (int i = 0; i < n; i++)
            {
                vector<int> old = permutations.front();
                permutations.pop();
                for (int j = 0; j <= old.size(); j++)
                {
                    vector<int> newPermutations(old);
                    newPermutations.insert(newPermutations.begin() + j, num);
                    if (newPermutations.size() == nums.size())
                        result.push_back(newPermutations);
                    else
                        permutations.push(newPermutations);
                }
            }
        }
        return result;
    }
};
static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();