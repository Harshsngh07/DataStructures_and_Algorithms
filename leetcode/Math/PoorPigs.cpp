class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int pigs(0);
        int temp = minutesToTest/minutesToDie +1;
        while(pow(temp,pigs)  < buckets){
            pigs++;
        }
        return pigs;
        
    }
};