//two pointer solution
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if (n==1) return nums;
        if (n==2)
        {
            swap(nums[1], nums[2]);
            return nums;
        }

        int left = 0, right = n;
        vector<int> v;

        for (int i=0;i<n;i++)
        {
            v.push_back(nums[left]);
            v.push_back(nums[right]);
            left++;
            right++;
        }

        return v;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();



// faster another solution
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> v(2*n);
        
        for(int i=0;i<2*n;i++)
        {
            if(i<n)
                v[2*i] = nums[i];
            else
                v[2*(i-n)+1] = nums[i];
        }
        
       return v; 
     }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();