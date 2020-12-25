class Solution
{
public:
    int maxArea(vector<int> &a)
    {
        int n = a.size();
        if (n == 0 || n == 1)
            return 0;
        int ans(0);
        int left(0), right(n - 1);
        while (left < right)
        {
            ans = max(ans, min(a[left], a[right]) * (right - left));
            if (a[left] < a[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};