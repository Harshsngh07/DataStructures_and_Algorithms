class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        set<vector<int>> st;
        for (int i = 0; i < pieces.size(); i++) {
            st.insert(pieces[i]);    
        }
        vector<int> temp; 
        for (int i = 0; i < arr.size(); i++) {
            temp.push_back(arr[i]);
            if (st.find(temp) != st.end()) {
                temp.clear();
            } 
        }
        return temp.empty();
    }
};
