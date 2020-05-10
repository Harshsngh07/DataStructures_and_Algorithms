void plusMinus(vector<int> arr) {

    float pos(0),neg(0),zero(0);
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }   

    pos = pos/arr.size();

    cout <<fixed << setprecision(6)<< pos<<endl;
    cout <<fixed << setprecision(6)<< neg/arr.size()<<endl;
    cout <<fixed << setprecision(6)<< zero/arr.size()<<endl;

}