class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int n = arr.size();
        if (n == 2 && arr[0] == 0 && arr[1] == 0)
            return true;
        set<int> s;
        for (int i = 0; i < n; i++)
            s.insert(arr[i]);
        int count(0);
        for (auto i : s)
        {
            if (s.find(i * 2) != s.end() && i != 0)
                count++;
        }
        return count >= 1;
    }
};