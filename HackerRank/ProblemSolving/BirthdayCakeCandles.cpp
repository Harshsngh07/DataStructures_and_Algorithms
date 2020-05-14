int birthdayCakeCandles(vector<int> ar) {
    
    long long int count(0);
    long long int maxCandle = *max_element(ar.begin(),ar.end());
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]==maxCandle)
            count++;
    }

    return count;

}
