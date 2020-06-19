//my solution

vector<int> countDistinct(int A[], int n, int k)
{

    unordered_map<int, int> m;
    vector<int> v;
    int count(0);

    for (int i = 0; i < k; i++)
    {
        if (m[A[i]] == 0)
            count++;
        m[A[i]] += 1;
    }

    v.push_back(count);

    for (int i = k; i < n; i++)
    {

        if (m[A[i - k]] == 1)
            count--;
        m[A[i - k]] -= 1;

        if (m[A[i]] == 0)
            count++;
        m[A[i]] += 1;

        v.push_back(count);
    }

    return v;
}



//testers solution

vector<int> countDistinct(int A[], int n, int k)
{
    unordered_map<int, int> um;
    vector<int> result;
    // count number of distinct elements for first window of size k
    for (int i = 0; i < k; i++)
    {
        um[A[i]]++;
    }
    result.push_back(um.size());

    // calculate answer for rest of the windows
    for (int i = 1; i < n - k + 1; i++)
    {
        um[A[i - 1]]--;
        if (um[A[i - 1]] <= 0)
        {
            um.erase(A[i - 1]);
        }
        um[A[i + k - 1]]++;

        result.push_back(um.size());
    }
    return result;
}