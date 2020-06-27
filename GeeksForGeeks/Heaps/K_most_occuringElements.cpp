// gfg solution

struct compare
{
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        // if frequencies of two elements are same
        // then the larger number should come first
        if (p1.second == p2.second)
            return p1.first < p2.first;

        // insert elements in the priority queue on the basis of
        // decreasing order of frequencies
        return p1.second < p2.second;
    }
};

// Function to print the k numbers with most occurrences
int print_N_mostFrequentNumber(int arr[], int n, int k)
{
    // unordered_map 'um' implemented as frequency hash table
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
        um[arr[i]]++;

    // store the elements of 'um' in the vector 'freq_arr'
    vector<pair<int, int>> freq_arr(um.begin(), um.end());

    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   compare>
        pq(um.begin(), um.end());

    // display the the top k numbers
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += pq.top().second;
        pq.pop();
    }
    return ans;
}



// my solution
int print_N_mostFrequentNumber(int arr[], int n, int k)
{
    // Your code here
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    int ans(0);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (auto i = m.begin(); i != m.end(); i++)
    {
        pq.push({i->second, i->first});
        if (pq.size() > k)
            pq.pop();
    }

    while (pq.size() > 0)
    {
        int x = pq.top().first;
        ans += x;
        pq.pop();
    }

    return ans;
}