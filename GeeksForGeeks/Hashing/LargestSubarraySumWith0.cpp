int maxLen(int A[], int n) {
   
   int prefixSum(0), maxLen(0);
   
   unordered_map<int,int> m;
   
   for(int i=0;i<n;i++)
   {
       prefixSum += A[i];
       
       if(A[i]== 0 && maxLen == 0)
            maxLen = 1;
       if(prefixSum==0)
            maxLen = i+1;
       
       if(m.find(prefixSum) != m.end())
            maxLen = max(maxLen, i - m[prefixSum]);
       else
            m[prefixSum] = i;
   }
   
   return maxLen;
}
