class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> m;
        for (string s : words)
            m[s]++;

        priority_queue<pair<int, string>> pq;

        for (auto i : m)
        {
            pq.push({-i.second, i.first});
            if (pq.size() > k)
                pq.pop();
        }

        vector<string> v;
        while (k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }

        reverse(v.begin(), v.end());
        return v;
    }
}; 