//naive solution

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        int x;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    x = nums1[i];
                    ans.push_back(x);
                    break;
                }
            }
        }

        vector<int>::iterator it;

        sort(ans.begin(), ans.end());

        it = unique(ans.begin(), ans.begin() + ans.size());

        ans.resize(distance(ans.begin(), it));

        return ans;
    }
};

//optimised soln
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_set<int> s{nums1.begin(), nums1.end()};

        nums1.clear();

        for (int i : nums2)
        {
            if (s.count(i))
            {
                nums1.push_back(i);
                s.erase(i);
            }
        }

        return nums1;
    }
};

// static int fastio = []() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     return 0;
// }();
