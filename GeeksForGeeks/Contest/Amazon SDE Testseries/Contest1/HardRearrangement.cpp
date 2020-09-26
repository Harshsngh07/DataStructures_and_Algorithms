// not able to solve

static bool compare(vector<int> &p1, vector<int> &p2)
{
    if (p1[0] == p2[0])
        return p1[1] < p2[1];
    else
        return p1[0] > p2[0];
}

vector<int> arrange(vector<int> &A, vector<int> &B, int n)
{

    vector<vector<int>> people(n);
    for (int i = 0; i < n; i++)
    {
        people[i].push_back(A[i]);
        people[i].push_back(B[i]);
    }

    sort(people.begin(), people.end(), compare);

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans.insert(ans.begin() + people[i][1], people[i][0]);
    }
    return ans;
}