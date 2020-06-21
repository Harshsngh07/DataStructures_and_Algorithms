string largestNumber(int n, int sum)
{

    string ans = "";

    if (sum > 9 * n)
        return "-1";

    for (int i = 0; i < n; i++)
    {
        int temp = 0;

        if (sum != 0)
            temp = sum > 9 ? 9 : sum;

        ans += to_string(temp);

        sum -= temp;
    }

    return ans;
}