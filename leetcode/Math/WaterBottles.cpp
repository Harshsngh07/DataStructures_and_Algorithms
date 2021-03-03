class Solution {
public:
  int numWaterBottles(int numBottles, int numExchange) {
    int count = 0, empty = 0;
    while(numBottles){
      count += numBottles;
      int tmp = numBottles + empty;
      numBottles = tmp / numExchange;
      empty = tmp % numExchange;
    }
    return count;
  }
};