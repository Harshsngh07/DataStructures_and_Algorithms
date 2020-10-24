class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum = 1;
        for(long long int i=2;i*i<=N;i++)
        {
            if(N%i==0)
            {
                if(i*i!=N)
                    sum = sum + i + N/i;
                else
                    sum = sum + i;
            }
        }
        
        if(sum == N && N!= 1)
            return 1;
        else
            return 0;
    }
};class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum = 1;
        for(long long int i=2;i*i<=N;i++)
        {
            if(N%i==0)
            {
                if(i*i!=N)
                    sum = sum + i + N/i;
                else
                    sum = sum + i;
            }
        }
        
        if(sum == N && N!= 1)
            return 1;
        else
            return 0;
    }
};class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum = 1;
        for(long long int i=2;i*i<=N;i++)
        {
            if(N%i==0)
            {
                if(i*i!=N)
                    sum = sum + i + N/i;
                else
                    sum = sum + i;
            }
        }
        
        if(sum == N && N!= 1)
            return 1;
        else
            return 0;
    }
};
class Solution
{
public:
    int isPerfectNumber(long long N)
    {
        // code here
        long long sum = 1;
        for (long long int i = 2; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                if (i * i != N)
                    sum = sum + i + N / i;
                else
                    sum = sum + i;
            }
        }

        if (sum == N && N != 1)
            return 1;
        else
            return 0;
    }
};