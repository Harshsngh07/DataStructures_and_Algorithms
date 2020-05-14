vector<int> breakingRecords(vector<int> scores) {

    vector<int> records;

    long long int high = scores[0] ;
    long long int low = scores[0];

    int countH(0),countL(0);    

    for(int i=1;i<scores.size();i++)
    {
        if(scores[i]>high)
        {
            high = scores[i];
            countH++;
        }
        else if (scores[i]<low)
        {
            low = scores[i];
            countL++;
        }

    }   
     
    records.push_back(countH);
    records.push_back(countL);
    return records;
}
