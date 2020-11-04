class Solution
{
public:
    bool isMonotonic(vector<int> &A)
    {
        int n = A.size();
        int count1(0), count2(0);
        for (int i = 0; i < n - 1; i++)
            if (A[i] <= A[i + 1])
                count1++;

        for (int i = 0; i < n - 1; i++)
            if (A[i] >= A[i + 1])
                count2++;

        if (count1 + 1 == n || count2 + 1 == n)
            return true;
        return false;
    }
};