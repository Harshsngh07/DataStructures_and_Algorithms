class Solution {
public:
    vector<int> countFreq(string& word)
    {
        vector<int> freq(26);
        for(auto& c: word) freq[c-'a']++;
        return freq;
    }
    
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int> MaxFreq(26);
        vector<string> ans;
        
        for(auto& word: B)
        {
            vector<int> freq = countFreq(word);
            for(int i=0;i<26;i++) MaxFreq[i] = max(MaxFreq[i], freq[i]);
        }
        
        for(auto& word: A)
        {
            vector<int> freq = countFreq(word);
            int i=0;
            for(;i<26;i++) if(freq[i]<MaxFreq[i]) break;
            if(i==26) ans.push_back(word);
        }
        
        return ans;
    }
};