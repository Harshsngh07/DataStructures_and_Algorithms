// O(n) with O(1 )space

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        int l(0), r(A.size() - 1);
        while (l < r)
        {
            while (l < r && A[l] % 2 == 0)
                l++;
            while (l < r && A[r] % 2 != 0)
                r--;
            int temp = A[l];
            A[l] = A[r];
            A[r] = temp;
        }
        return A;
    }
};


// O(n) with O(n) space

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> v;
        
        for(int i=0;i<A.size();i++)
            if(A[i]%2==0)
                v.push_back(A[i]);
        
        for(int i=0;i<A.size();i++)
            if(A[i]%2!=0)
                v.push_back(A[i]);
       
        return v;
    }
};