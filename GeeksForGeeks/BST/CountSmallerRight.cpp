// similar to closest element to left 
int countSmallerRight(int arr[], int n)
{
    set<int> s;
    int ans = 0;
    int count(0);
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(arr[i]);
        auto it = s.lower_bound(arr[i]);
        if (it != s.end())
            count = distance(s.begin(), it);
        else
            count = 0;
        ans = max(ans, count);
    }

    return ans;
}