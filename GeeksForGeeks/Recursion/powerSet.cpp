void powerSetUtil(string &str, vector<string> &v, int index = 0,
                  string curr = "")
{
    int n = str.length();

    // base case
    if (index == n)
    {
        v.push_back(curr);
        return;
    }

    // Two cases : Do not include str[index]
    //             Include str[index]
    powerSetUtil(str, v, index + 1, curr);
    powerSetUtil(str, v, index + 1, curr + str[index]);
}

vector<string> powerSet(string s)
{
    vector<string> ans;
    powerSetUtil(s, ans);
    return ans;
}