class Solution {
public:
    string sortedNum(int N)
    {
        string s = to_string(N);
        sort(s.begin(), s.end());
        return s;
    }
    
    bool reorderedPowerOf2(int N) {
        string str = sortedNum(N);
        for(int i=0;i<32;i++)
            if(str == sortedNum(1<<i)) return true;
        return false;
    }
};