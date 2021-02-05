class Solution {
public:
    string simplifyPath(string path) {
        string res, tmp;
        vector<string> s;
        stringstream ss(path);
        while(getline(ss, tmp, '/'))
        {
            if(tmp == "" || tmp==".") continue;
            if(tmp== ".." && !s.empty()) s.pop_back();
            else if(tmp!="..") s.push_back(tmp);
        }
        
       for(auto str : s) res += "/"+str;
       return res.empty() ? "/" : res;
    }
};