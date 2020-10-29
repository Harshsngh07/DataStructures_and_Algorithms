class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
       int sz = seats.size();
        int l = -1;
        int res = 1;
        for (int i = 0; i <= sz; ++i) {
            if (sz == i || seats[i] == 1) {
				// if two sides are occupied
                int gap = (i - l) / 2;
				// if the empty chairs are at the end or the beginning
                if (l == -1)
                    gap = i;
                else if (sz == i)
                    gap = i - l - 1;
                    
                res = max(res, gap);
                l = i;
            }
        }
        
        return res;
    }
};