class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // Sort the array elements
        sort(nums.begin(), nums.end());
        
        // Get the middle number
        int middleNum = nums[nums.size()/2];
        
        // Min number of moves required to make all elements equal
        int minMoves = 0;
        
        // Iterate all the elements in the input array
        for (int num : nums) {
            // Calculate the no of moves required to make the current element
            // equal the middle element
            minMoves += abs(num - middleNum);
        }
        
        // return the min num of moves
        return minMoves;
    }
};