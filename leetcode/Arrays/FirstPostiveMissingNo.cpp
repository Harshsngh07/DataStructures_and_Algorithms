class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {

        int size = nums.size();

        int containsOne = 0;

        //base case

        if (nums.size() == 0)
            return 1;

        //step 1

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 1)
                containsOne = 1;
            else if (nums[i] <= 0 || nums[i] > size)
                nums[i] = 1;
        }

        //step 2

        if (containsOne == 0)
            return 1;

        for (int i = 0; i < size; i++)
        {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
                nums[index] = -1 * nums[index];
        }

        //step 3

        for (int i = 0; i < size; i++)
        {
            if (nums[i] > 0)
                return i + 1;
        }

        return size + 1;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();


//this soln contains extra O(n) space

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {

        int size = nums.size();

        unordered_set<int> s;

        for (auto i : nums)
            s.insert(i);
        int ans(0);
        for (int i = 1; i <= size + 1; i++)
        {
            if (s.find(i) == s.end())
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};