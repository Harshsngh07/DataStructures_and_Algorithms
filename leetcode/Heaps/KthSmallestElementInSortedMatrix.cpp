class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxH;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                maxH.push(matrix[i][j]);
                
                if(maxH.size()>k)
                    maxH.pop();
            }
        }
        
        return maxH.top();
    }
};