#include <iostream>

using namespace std;

class B;//forward declaration

class A
{
    int m;
    public: 
            void disp();
            void  getValue()
            { m=10; }
            friend int max(A ,B );
};

class B
{
    int n;
    public: 
            void disp();
            void  getValue()
            { n=5; }
            friend int max(A ,B );
};

int max(A a, B b)
{
    int ans = (a.m < b.n) ? a.m : b.n ;
    cout << ans;
    return ans;
}

int main()
{
    A a;
    B b;
    a.getValue();
    b.getValue();
    
    max(a,b);
    
    return 0;

}