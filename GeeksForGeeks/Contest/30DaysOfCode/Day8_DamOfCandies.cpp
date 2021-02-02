class Solution{
    
    public:
    int maxCandy(int a[], int n) 
    { 
        int area(0);
        if(n==0 || n==1) return 0;
        int left(0), right(n-1);
        while(left<right)
        {
            area = max(area, min(a[left],a[right])*((right-left)-1));
            if(a[left]<=a[right])
                left++;
            else
                right--;
        }
        
        return area;
    }   
};