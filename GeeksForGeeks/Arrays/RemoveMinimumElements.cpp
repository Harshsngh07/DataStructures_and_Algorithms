int minRemoval(int arr[], int n)
{
    // code here
    sort(arr, arr + n);
    int minE = *min_element(arr, arr + n);
    int maxE = *max_element(arr, arr + n);
    if (minE * 2 >= maxE)
        return 0;

    int ans(INT_MAX);
    for (int i = 0; i < n; i++)
    {
        int x = arr[i] * 2;
        int temp = upper_bound(arr, arr + n, x) - arr;
        ans = min(ans, (n - temp) + i);
    }

    return ans;
}