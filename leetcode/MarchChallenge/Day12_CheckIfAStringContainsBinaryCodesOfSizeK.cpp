class Solution {
public:
    bool hasAllCodes(string str, int k) {
        if(str.length()<k) return false;
        set<string> s;
        s.insert(str.substr(0,k));
        
        for(int i=k;i<str.length();i++)
            s.insert(str.substr(i-k+1,k));
        
        return s.size()==pow(2,k);
        
    }
};
static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();