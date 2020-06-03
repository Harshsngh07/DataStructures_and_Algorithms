class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
       return (max_element(A.begin(),A.end())-A.begin());
    }
};
static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();