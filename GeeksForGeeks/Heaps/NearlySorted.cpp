vector <int> nearlySorted(int arr[], int num, int K){
    vector<int> v;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0;i<num;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>K)
        {
            int x = pq.top();
            v.push_back(x);
            pq.pop();
        }
    }
    
    while(pq.size()>0)
    {
        int x = pq.top();
        v.push_back(x);
        pq.pop();
    }
    return v;
}