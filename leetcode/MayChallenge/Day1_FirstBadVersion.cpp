// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

/* Author: Harsh Singh */

class Solution {
public:
    int firstBadVersion( int n) {
            
        int l(0),r(n),mid(0);

        while(l<=r)
        {
            mid = l+(r-l)/2;
            if(!isBadVersion(mid)) 
                l= mid+1;
            else
                r=mid-1;       
        }
        
        if(!isBadVersion(mid)) 
            return mid+1;
        
        return mid;
    }
};