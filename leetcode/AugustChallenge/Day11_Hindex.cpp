class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        sort(citations.begin(),citations.end());
        int n = citations.size();
        if(n==0 || (n==1 && citations[0]==0)) return 0; 
        if(n==1 && citations[0]!=0) return 1;
        
        int l(0),h(n-1);
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            
            if(citations[mid]<n-mid)
                l=mid+1;
            else
                h = mid -1;
        }
        return n-l;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();