int immediateSmaller(int arr[], int n, int x)
{
    // your code here
    //sort(arr,arr+n);
    int diff = INT_MAX, ans(0);
    for (int i = 0; i < n; i++)
    {

        if (x > arr[i] && abs(arr[i] - x) < diff)
        {
            diff = abs(arr[i] - x);
            ans = arr[i];
        }
    }
    return ans > 0 ? ans : -1;
}