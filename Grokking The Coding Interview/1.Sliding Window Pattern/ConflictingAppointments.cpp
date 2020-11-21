bool canAttendAllMeetings(vector<vector<int>> &A)
{
    sort(A.begin(), A.end(), [](const A &x, const B &y) { x.first < y.first; });
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i].first < A[i - 1].second)
            return false;
    }
    return true;
}