bool compare(pair<int, int> x, pair<int, int> y)
{
    return x.first<y.first;
}
vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> v, int n) {

    
    int i;
    sort(v.begin(), v.end(), compare);
    
    for(i=1;i<v.size();i++)
    {
        if(v[i].first <= v[i-1].second && v[i-1].first!=-1)
        {
            v[i].first = v[i-1].first;
            v[i].second = max(v[i].second, v[i-1].second);
            v[i-1].first = -1;
            i--;
        }
    }
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first!=-1)
            cout << v[i].first << " " << v[i].second << " ";
    }
    v.clear();
    return v;
}