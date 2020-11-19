class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
       int n = mat.size();
       if(n==0) return false; 
       int m = mat[0].size();
       int low = 0, high = (n*m)-1;
       
       while(low<=high)
       {
           int mid = low + (high-low)/2;
           if(mat[mid/m][mid%m] == x)
               return true;
           else if(mat[mid/m][mid%m] < x)
               low = mid+1;
           else
               high = mid-1;
       }
  
       return false; 
    }
};