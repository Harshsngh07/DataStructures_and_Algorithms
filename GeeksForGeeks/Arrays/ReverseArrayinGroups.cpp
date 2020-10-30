vector<long long> reverseInGroups(vector<long long> mv, int n, int k)
{

    for (int i = 0; i < n; i += k)
    {
        int left = i;

        // to handle case when k is not multiple of n
        int right = min(i + k - 1, n - 1);

        // reverse the sub-array [left, right]
        while (left < right)
            swap(mv[left++], mv[right--]);
    }
    return mv;
}