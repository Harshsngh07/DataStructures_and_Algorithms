class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int minRepeat = ceil((float)b.size() / a.size());
        string temp;
        for(int i=0;i<minRepeat;i++)
            temp += a;
        
        if(temp.find(b)!=string::npos) return minRepeat;
        
        temp+=a;
        
        if(temp.find(b)!=string::npos) return minRepeat+1;
        
        return -1;
    }
};