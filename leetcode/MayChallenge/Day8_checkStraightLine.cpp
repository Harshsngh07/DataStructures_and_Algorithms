class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
    
        if(coordinates.size() == 2)
            return true;
        
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1=coordinates[1][0] - x0;
        int y1 = coordinates[1][1] - y0;
        
        for (int i=2;i<coordinates.size();i++)
        {  
            if((coordinates[i][1]-y0)*x1 != y1*(coordinates[i][0]-x0))
                return false;
        }
        return true;
        
    }
};
