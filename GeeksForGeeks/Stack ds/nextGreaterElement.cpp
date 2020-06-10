void nextLargerElement(long long arr[], int n)
{
    vector<long long> v;

    stack<long long> s;

    for (long long int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
            v.push_back(-1);
        else if (s.size() > 0 && s.top() > arr[i])
            v.push_back(s.top());
        else if (s.size() > 0 && s.top() <= arr[i])
        {
            while (s.size() > 0 && s.top() <= arr[i])
            {
                s.pop();
            }

            if (s.size() == 0)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }

        s.push(arr[i]);
    }

    reverse(v.begin(), v.end());

    for (long long int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}