string ExcelColumn(int n)
{
    string s;
    while (n--)
    {
        s += 'A' + n % 26;
        n /= 26;
    }
    reverse(s.begin(), s.end());
    return s;
}