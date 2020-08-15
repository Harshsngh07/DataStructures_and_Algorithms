//o(nlogn) but faster  than below solution takes 0.93 seconds

int minSwaps(int arr[], int N)
{

    pair<int, int> a[N];

    for (int i = 0; i < N; i++)
    {
        a[i].first = arr[i];
        a[i].second = i;
    }

    sort(a, a + N);

    int count(0);

    vector<bool> vis(N, false);

    for (int i = 0; i < N; i++)
    {
        if (vis[i] || a[i].second == i)
            continue;

        int cycle(0);

        int j = i;

        while (!vis[j])
        {
            vis[j] = 1;
            j = a[j].second;
            cycle++;
        }

        if (cycle > 0)
            count += (cycle - 1);
    }

    return count;
}

// o(nlogn) tle takes 1.87seconds

int minSwaps(int arr[], int N)
{

    vector<pair<int, int>> v(N);

    for (int i = 0; i < N; i++)
    {
        v[i].first = arr[i];
        v[i].second = i;
    }

    sort(v.begin(), v.end());

    int count(0);

    for (int i = 0; i < N; i++)
    {
        if (v[i].second == i)
            continue;
        else
        {
            swap(v[i].first, v[v[i].second].first);
            swap(v[i].second, v[v[i].second].second);
        }

        if (i != v[i].second)
            --i;

        ++count;
    }

    return count;
}




