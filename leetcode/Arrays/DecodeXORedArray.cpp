class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> v;
        v.push_back(first);
        v.push_back(first ^ encoded[0]);
        for (int i = 1; i < encoded.size(); i++)
        {
            int x = encoded[i] ^ v[i];
            v.push_back(x);
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