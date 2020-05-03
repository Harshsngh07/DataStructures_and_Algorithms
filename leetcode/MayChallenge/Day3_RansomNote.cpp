
/* Author: Harsh Singh */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> countWords;
        for(auto c: magazine)
            countWords[c]++;
        
        for(auto c: ransomNote)
        {
            if(countWords.find(c) == countWords.end() || countWords[c] == 0)
                return false;
            countWords[c]--;
        }
        return true;
    }
};
