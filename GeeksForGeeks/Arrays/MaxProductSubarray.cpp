long long maxProduct(int *arr, int n)
{
    long long ans, maxp, minp;
    ans = maxp = minp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
            swap(maxp, minp);
        maxp = max<long long int>(maxp * arr[i], arr[i]);
        minp = min<long long int>(minp * arr[i], arr[i]);
        ans = max(ans, maxp);
    }
    return ans;
}