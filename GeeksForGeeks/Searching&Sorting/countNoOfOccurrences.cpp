#include <bits/stdc++.h>
using namespace std;

int first(vector<int> &nums, int target)
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

    return res;
}

int last(vector<int> &nums, int target)
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

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        int f = first(nums, target);
        int l = last(nums, target);

        int ans;
        if (l < 0 && f < 0)
            ans = l + f + 1;
        else
            ans = l - f + 1;

        cout << ans << endl;
    }

    return 0;
}