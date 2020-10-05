class Solution {
public:
    int countDigits(int n) {
        if (n == 0)
            return 0;
        return 1 + countDigits(n>>1);
    }
    
    int bitwiseComplement(int N) {
        if (N == 0) return 1;
        return pow(2, countDigits(N)) - 1 - N;
    }
};