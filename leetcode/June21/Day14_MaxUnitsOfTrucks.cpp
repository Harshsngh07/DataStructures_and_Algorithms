class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
     sort(begin(boxTypes),end(boxTypes), [](vector<int> v1, vector<int> v2){
         return v1[1] > v2[1];
     });
        
       int res(0), temp(0);
        
        for(int i=0;i<boxTypes.size();i++)
        {
            if(temp+boxTypes[i][0]<=truckSize)
            {
                res += boxTypes[i][0]*boxTypes[i][1];
                temp+=boxTypes[i][0];
            }
            else
            {
                res += (truckSize-temp)*boxTypes[i][1];
                break;
            }
        }
        
        return res;
    }
};
