int Solution::solve(int A) {
   int x = sqrt(A);
   int n = x;
   bool flag = true;
   while(x*n < A)
   {
       if(true)
       {
           n++;
           flag=false;
       }
       else
       {
           x++;
           flag =true;
       }
   }
   int ans = x+n;
   if(x+n==A) return ans+1;
   return ans;
}int Solution::solve(int A) {
   int x = sqrt(A);
   int n = x;
   bool flag = true;
   while(x*n < A)
   {
       if(true)
       {
           n++;
           flag=false;
       }
       else
       {
           x++;
           flag =true;
       }
   }
   int ans = x+n;
   if(x+n==A) return ans+1;
   return ans;
}