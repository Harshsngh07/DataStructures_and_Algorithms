class KthLargest {
public:
    int x;
    priority_queue<int, vector<int>, greater<int>>  pq;

    KthLargest(int k, vector<int>& nums) {
        x = k;
        int n = nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        }
    }
  
    int add(int val) {     
       pq.push(val);
       while(pq.size()>x)
       {
           pq.pop();
       }
       return pq.top();
    }
};
