vector<int> common_element(vector<int> v1, vector<int> v2)
{
    vector<int> v;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {

        if (v1[i] == v2[j])
        {
            v.push_back(v1[i]);
            i++;
            j++;
        }
        else if (v1[i] < v2[j])
            i++;
        else
            j++;
    }

    return v;
}