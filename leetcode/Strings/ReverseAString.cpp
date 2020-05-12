class Solution {
public:
    void reverseString(vector<char>& s) {
       int i =0;
        int j= s.size();
        while(i!=s.size()/2)
        {
            swap(s[i],s[j-1]);
            i++;
            j--;
        }
    }
};
