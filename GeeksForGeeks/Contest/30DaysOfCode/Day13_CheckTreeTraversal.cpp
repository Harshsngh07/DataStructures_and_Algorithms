//I didnot solve this question
// check tree traversal
class Solution{
    public:
    void postorder(int pre[],int in[],int l,int h,int &i,vector<int> &v,bool &x){
        if(l>h || !x)
            return;
        int key=pre[i++],k;
        for(k=0; k<=h; k++)
            if(in[k]==key)
                break;
        if(k==h+1){
            x=false;
            return;
        }
        postorder(pre,in,l,k-1,i,v,x);
        postorder(pre,in,k+1,h,i,v,x);
        v.push_back(key);
    }
    bool checktree(int pre[],int in[],int post[],int len){
        vector<int> v;
        int i=0;
        bool x=true;
        postorder(pre,in,0,len-1,i,v,x);
        if(x==false)
            return false;
        x=true;
        for(i=0;i<len && i<v.size();i++)
            if(v[i]!=post[i]){
                x=false;
                break;
            }
        return x;
    }
};