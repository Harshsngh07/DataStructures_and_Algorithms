class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator it;

        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        priority_queue<pair<int, int>> minHeap;

        for (it = m.begin(); it != m.end(); ++it)
        {
            minHeap.push(make_pair(it->second, it->first));
        }

        vector<int> v(k);

        for (int i = 0; i < k; i++)
        {
            v[i] = minHeap.top().second;
            minHeap.pop();
        }

        return v;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();