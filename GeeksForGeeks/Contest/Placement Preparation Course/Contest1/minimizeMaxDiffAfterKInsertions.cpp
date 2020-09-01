// could not solve
int minimizedMaxDiff(int arr[], int n, int k)
{
    int maxD = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        int x = abs(arr[i] - arr[i + 1]);
        if (x > maxD)
            maxD = x;
    }

    if (maxD == 0)
        return 0;

    int best(1), required, worst(maxD);

    while (best < worst)
    {
        int mid = (best + worst) / 2;

        required = 0;

        for (int i = 0; i < n - 1; i++)
            required += (abs(arr[i] - arr[i + 1]) - 1) / mid;

        if (required > k)
            best = mid + 1;
        else
            worst = mid;
    }

    return worst;
}