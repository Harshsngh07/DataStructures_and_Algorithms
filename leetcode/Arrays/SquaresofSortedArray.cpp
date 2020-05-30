class Solution
{
public:
    vector<int> sortedSquares(vector<int> &A)
    {

        for (int i = 0; i < A.size(); i++)
            A[i] = pow(A[i], 2);

        sort(A.begin(), A.end());

        return A;
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();