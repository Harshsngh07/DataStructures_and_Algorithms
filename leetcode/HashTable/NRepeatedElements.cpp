class Solution
{
public:
    int repeatedNTimes(vector<int> &A)
    {

        int a = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < A.size(); i++)
        {
            m[A[i]]++;
        }
        for (auto x : m)
        {
            if (x.second > 1)
            {
                a = x.first;
            }
        }
        return a;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();