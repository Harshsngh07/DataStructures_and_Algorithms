string kangaroo(int x1, int v1, int x2, int v2) {

    string s;

    if((x1>x2 && v1<v2 ) || (x1<x2 && v1>v2))
    {
        if(abs(x1-x2)%abs(v1-v2)==0)
            s = "YES";
        else
            s = "NO";
    }else
        s = "NO";

    
    
    return s;
}
