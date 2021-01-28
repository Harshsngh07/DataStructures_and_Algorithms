
bool helper(int mid, int arr[], int n, int k)
{
    int pos = arr[0];

    int elements = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            elements++;

            if (elements == k)
                return true;
        }
    }
    return 0;
}

int keepDistance(int n, int m, vector<int> &a)
{
    sort(a.begin(), a.end());

    int res = -1;
    int k = 3;
    int left = 1, right = arr[n - 1];
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (helper(mid, arr, n, k))
        {
            res = max(res, mid);
            left = mid + 1;
        }

        else
            right = mid;
    }

    return res;
}
