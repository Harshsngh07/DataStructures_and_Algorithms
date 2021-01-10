class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &T)
    {
        int n = T.size();
        vector<int> v(n, 0);
        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && T[s.top()] < T[i])
            {
                v[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
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