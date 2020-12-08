class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans=0;
        int size=time.size();
        vector<int> um(60,0); //Constant space - 60
        for(int i=0;i<size;i++){
            int curr=time[i]%60;
            ans+=(curr==0 ? um[0] : um[60-curr]);
            um[curr]++;
        }
        return ans;
    }
};
