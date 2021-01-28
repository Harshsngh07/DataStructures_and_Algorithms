class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
    
       long long ans = 1;
       sort(array.begin(),array.end());
       
       for(int i=0;i<n && array[i]<=ans;i++ )
            ans+=array[i];
        return ans;
    } 
};