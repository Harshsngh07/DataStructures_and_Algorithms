class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        for(int i=0;i<n;i++) cout << strs[i] << " ";
        string first = strs[0];
        string second = strs[n-1];
        string ans;
        int i(0), j(0);
        
        while(i<first.size() && j<second.size())
        {
            if(first[i]==second[j])
                ans.push_back(first[i]);
            else
                break;
            i++;
            j++;
        }
        
        
        if(ans.size()==0) return "";
        return ans;
    }
};