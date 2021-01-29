class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a'); //fill 'a' for width 'n
        k-=n; // initially decrease 'n', since array index starts at 0, instead of 1 (-1 for each letter)
        for(int i=n-1;i>=0;i--) {
            s[i] += min(25, k); 
            k=max(0, k-25);
        }
        return s;
    }
};