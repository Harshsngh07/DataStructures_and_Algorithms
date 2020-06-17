//onepass solution

int BS(vector<int> vec, int l, int h, int x)
{
    int mid = l + (h - l) / 2;

    if (l > h)
        return -1;

    if (vec[mid] == x)
        return mid;

    if (vec[l] <= vec[mid])
    {
        if (x >= vec[l] && x <= vec[mid])
            return BS(vec, l, mid - 1, x);
        return BS(vec, mid + 1, h, x);
    }

    if (x >= vec[mid] && x <= vec[h])
        return BS(vec, mid + 1, h, x);
    return BS(vec, l, mid - 1, x);
}

int Search(vector<int> vec, int K)
{
    //code here
    int low = 0, high = vec.size() - 1;
    return BS(vec, low, high, K);
}

// one pass solution less complex

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] >= nums[low])
            {
                if (target <= nums[mid] && target >= nums[low])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else
            {
                if (target >= nums[mid] && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1;
    }
};