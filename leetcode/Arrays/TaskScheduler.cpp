class Solution {
public:
    int count[26], maxCount = 0, extras = 0;
    int max(int a, int b){ return (a>b)?a:b;}
    int leastInterval(vector<char>& tasks, int n) {
        if(n == 0) return tasks.size();
        for (char ch : tasks) count[ch-'A']++;
        for (int i = 0; i < 26; i++) maxCount = max(maxCount, count[i]);
		// finding elemets having frequency equal to maxCount
        for (int i = 0; i < 26; i++) 
            if (count[i] == maxCount) extras++;
        return max(tasks.size(), ((maxCount-1)*(n+1) + extras));
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();