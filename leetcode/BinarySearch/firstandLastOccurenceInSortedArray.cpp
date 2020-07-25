class Solution
{
public:
    void first(vector<int> &nums, int target, vector<int> &v)
    {
        int low = 0;
        int high = nums.size() - 1;

        int res = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                res = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        v.push_back(res);
    }

    void last(vector<int> &nums, int target, vector<int> &v)
    {
        int low = 0;
        int high = nums.size() - 1;

        int res = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                res = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        v.push_back(res);
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> v;
        first(nums, target, v);
        last(nums, target, v);
        return v;
    }
};