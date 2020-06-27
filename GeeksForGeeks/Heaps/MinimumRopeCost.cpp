long long minCost(long long arr[], long long n)
{
    // Your code here
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++)
        pq.push(arr[i]);

    long long minCost(0);

    while (pq.size() >= 2)
    {
        long long int first = pq.top();
        pq.pop();

        long long int second = pq.top();
        pq.pop();

        minCost += first + second;

        pq.push(first + second);
    }

    return minCost;
}