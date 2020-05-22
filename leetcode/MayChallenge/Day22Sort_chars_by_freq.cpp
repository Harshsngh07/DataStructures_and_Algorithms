class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> v('z'+1,{0,0});
        
        for(auto c : s)
            v[c] = {v[c].first+1,c};
        
        sort(v.begin(),v.end());
        
        string ans = "";
        for(auto p : v)
            ans = string(p.first,p.second) + ans;
            
        return ans;
    }
};