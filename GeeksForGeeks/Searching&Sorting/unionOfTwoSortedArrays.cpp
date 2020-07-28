vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    vector<int> v;

    int i(0), j(0);

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            v.push_back(arr1[i++]);
        else if (arr1[i] > arr2[j])
            v.push_back(arr2[j++]);
        else
        {
            v.push_back(arr2[j++]);
            i++;
        }
    }

    while (i < n)
        v.push_back(arr1[i++]);

    while (j < m)
        v.push_back(arr2[j++]);

    vector<int>::iterator ip;

    ip = unique(v.begin(), v.end());

    v.resize(distance(v.begin(), ip));

    return v;
}