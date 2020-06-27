class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
    {
        vector<vector<int>> v;

        priority_queue<pair<int, pair<int, int>>> pq;

        for (int i = 0; i < points.size(); i++)
        {
            pq.push({(pow(points[i][0], 2) + pow(points[i][1], 2)), {points[i][0], points[i][1]}});

            if (pq.size() > K)
                pq.pop();
        }

        while (pq.size() > 0)
        {
            pair<int, int> x = pq.top().second;
            v.push_back({x.first, x.second});
            pq.pop();
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


