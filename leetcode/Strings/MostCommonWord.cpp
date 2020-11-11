class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> Bann(banned.begin(), banned.end());
        unordered_map<string, int> m;
        // lower the letters
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        // remove all other than letters
        for (int i =0; i < paragraph.size(); i++){
            if (paragraph[i] <'a' or paragraph[i] > 'z')
                paragraph[i] = ' ';
        }
        istringstream ss(paragraph);
        string word;
        while (ss >> word ){
            if (Bann.find(word)==Bann.end())
                m[word]++;
        }
        int maxi = 0;
        
        for (auto x: m){
            // maxi = max(maxi, x.second);
            if (x.second > maxi){
                maxi = x.second;
                word = x.first;
            }
        }
        return word;
    }
};