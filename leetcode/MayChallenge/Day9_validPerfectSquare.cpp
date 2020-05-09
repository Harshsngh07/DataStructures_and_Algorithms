class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1)
            return num;
       long long int l(0),r(num),mid,ans;
        
        
        for(int i=l;i<=r;i++)
        {
            mid = (l+r)/2;
            
            if(mid*mid == num)
            {
                ans = mid;
                return ans;
            }
            
            if(mid*mid < num)
            {
                l=mid+1;
                ans = mid;
            }else
                r=mid-1;
                
        }
        return ans*ans==num?true:false;
    }
};
