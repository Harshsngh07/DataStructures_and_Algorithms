class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         int n = points.size();
        sort(begin(points), end(points), [](vector<int>& v1, vector<int>& v2) {
            return v1[1] < v2[1];
        });
        
        int arrows  = 1, end = points[0][1];
        
        for(int i=1;i<n;i++)
        {
            if(end<points[i][0])
            {
                arrows++;
                end = points[i][1];
            }
        }
        
        return arrows;
    }
};
