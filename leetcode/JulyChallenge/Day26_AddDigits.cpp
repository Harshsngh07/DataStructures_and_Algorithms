//naive solution O(1)

class Solution {
public:
    int addDigits(int num) {
        
        if(num<9) return num;
        int ans(0);
        while(num>0 || ans>9)
        {
            if(num==0)
            {
                num = ans;
                ans = 0;
            }
            
            int rem = num % 10;
            ans += rem;
            num /= 10;
        }
        
        return ans;
    }
};

// O(1) solution
class Solution
{
public:
    int addDigits(int num)
    {

        if (num == 0)
            return 0;
        if (num % 9 == 0)
            return 9;
        return (num % 9);
    }
};