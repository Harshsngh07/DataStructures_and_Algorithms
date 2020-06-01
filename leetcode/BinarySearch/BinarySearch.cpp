class Solution
{
public:
    int Binary(vector<int> &nums, int l, int h, int x)
    {
        int mid = (l + h) / 2;

        if (nums[mid] == x)
            return mid;

        if (l > h)
            return -1;

        if (nums[mid] > x)
            return Binary(nums, l, mid - 1, x);
        else
            return Binary(nums, mid + 1, h, x);
    }

    int search(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;

        return Binary(nums, low, high, target);
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();