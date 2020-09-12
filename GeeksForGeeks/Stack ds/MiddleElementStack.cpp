int stackMiddle(int n, stack<int> st)
{
    while (st.size() > n - n / 2)
    {
        st.pop();
    }

    int ans = INT_MIN;

    ans = st.top();

    while (!st.empty())
    {
        st.pop();
    }

    return ans;
}