class FreqStack {
public:
    int maxFreq = 1;
    unordered_map<int, int> freq; // {x,freq}
    unordered_map<int, stack<int>> s; // {freq, stack}
    
    FreqStack() {
        
    }
    
    void push(int x) {
        freq[x]++;
        s[freq[x]].push(x);
        maxFreq = max(maxFreq, freq[x]);
    }
    
    int pop() {
        
        int x = s[maxFreq].top();
        s[maxFreq].pop();
        if(s[maxFreq].empty())
            maxFreq--;
        freq[x]--;
        if(freq[x]==0)
            freq.erase(x);
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */