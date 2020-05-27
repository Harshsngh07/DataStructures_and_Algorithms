class Solution
{
public:
    bool validMountainArray(vector<int> &A)
    {

        int count1(0), count2(0);
        int maxIndex = max_element(A.begin(), A.end()) - A.begin();

        if (maxIndex == 0 || maxIndex == A.size() - 1)
            return false;

        for (int i = 0; i < maxIndex; i++)
            if (A[i] < A[i + 1])
                count1++;

        for (int i = maxIndex; i < A.size() - 1; i++)
            if (A[i] > A[i + 1])
                count2++;

        if (count1 == maxIndex && count2 == (A.size() - 1) - maxIndex)
            return true;
        return false;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();