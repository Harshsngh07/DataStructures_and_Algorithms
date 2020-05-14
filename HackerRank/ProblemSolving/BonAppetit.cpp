void bonAppetit(vector<int> bill, int k, int b) {

    int sum(0);
    for(int i=0;i<bill.size();i++)
    {
        sum+=bill[i];
    }

    if(b==sum/2)
        cout<<bill[k]/2<<endl;
    else
        cout<<"Bon Appetit" <<endl;   

}
