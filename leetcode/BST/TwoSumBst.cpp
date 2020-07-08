/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void inorder(TreeNode* node, vector<int>& nums)
    {
        if(!node) return;
            
        inorder(node->left,nums);
        nums.push_back(node->val);
        inorder(node->right,nums);
        
    }
    
    bool findTargetArray(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
        while(left<right)
        {
            if(nums[left]+nums[right]== k)
                return true;
            else if (nums[left] + nums[right] > k)
                right--;
            else
                left++;
        }
        
        return false;
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorder(root,nums);
        return findTargetArray(nums,k);
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();