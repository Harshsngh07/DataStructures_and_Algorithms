int firstRepeated(int arr[], int n)
{

    unordered_set<int> m;
    unordered_set<int>::iterator it;
    int min = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (m.find(arr[i]) != m.end())
            min = i;
        else
            m.insert(arr[i]);
    }
    return min != -1 ? min + 1 : min;
}

//second sol

int firstRepeated(int arr[], int n)
{

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    int ans(-1);
    for (int i = 0; i < n; i++)
    {
        if (m[arr[i]] > 1)
        {
            ans = i + 1;
            break;
        }
    }
    return ans > 0 ? ans : -1;
}