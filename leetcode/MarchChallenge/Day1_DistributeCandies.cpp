class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(auto i: candyType)
            s.insert(i);
        int n = candyType.size();
        int ans = n/2;
        int m = s.size();
        ans = min(ans, m);
        return ans;
    }
};