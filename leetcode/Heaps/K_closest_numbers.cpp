class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int> v;

        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < arr.size(); i++)
        {
            pq.push({abs(arr[i] - x), arr[i]});
            if (pq.size() > k)
                pq.pop();
        }

        while (pq.size() > 0)
        {
            int x = pq.top().second;
            v.push_back(x);
            pq.pop();
        }

        sort(v.begin(), v.end());

        return v;
    }
};