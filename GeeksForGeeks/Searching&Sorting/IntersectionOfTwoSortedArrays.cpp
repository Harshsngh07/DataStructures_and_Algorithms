vector<int> printIntersection(int arr1[], int arr2[], int N, int M)
{
    vector<int> v;
    set<int> s;
    int i = 0, j = 0;
    while (i < N && j < M)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else if (arr1[i] == arr2[j])
        {
            s.insert(arr2[j++]);
            i++;
        }
    }

    if (s.empty())
        v.push_back(-1);
    else
    {
        for (auto i : s)
            v.push_back(i);
    }
    return v;
}
