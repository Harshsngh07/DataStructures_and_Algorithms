vector<int> compareTriplets(vector<int> a, vector<int> b) {

    vector<int> result;
    int cA(0),cB(0);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[i])
           cA++;
        else if(a[i]<b[i])
            cB++;
        else
            continue;

    }

    result.push_back(cA);
    result.push_back(cB);

    return result;

}
