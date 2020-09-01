//was not able to solve
string smallestK(long long n)
{
    string s;
    if (n >= 0 && n <= 9)
    {
        s = to_string(n);
        return s;
    }

    stack<int> st;

    for (int i = 9; i >= 2 && n > 1; i--)
    {
        while (n % i == 0)
        {
            st.push(i);
            n /= i;
        }
    }

    if (n != 1)
        return "-1";

    long long k = 0;
    while (!st.empty())
    {
        k = k * 10 + st.top();
        st.pop();
    }

    s = to_string(k);

    return s;
}
