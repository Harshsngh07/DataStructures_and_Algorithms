class Solution {
public:
     int findComplement(int num) {
         int ans = 0;
         int raise = 1;
         while(num>0)
         {
             ans+= (num % 2 ^ 1) * raise;
             raise <<= 1 ; //same as multiplying raise * 2;
             num >>= 1; // same as num / 2
         }
         return ans;
     }
};
