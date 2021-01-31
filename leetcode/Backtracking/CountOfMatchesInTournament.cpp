class Solution {
public:
    int numberOfMatches(int n) {
        int matches(0), temp(0);
            while(n>=2)
            {
                if(n%2==0)
                {
                    matches += n/2;
                    temp = n/2;
                    n = n-temp;
                }
                else
                {
                    matches += (n-1)/2;
                    temp = n/2;
                    n = n-temp;
                }
            }
        
        return matches;
    }
};