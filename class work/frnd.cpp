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
            friend void swap(A &,B &);
};

class B
{
    int n;
    public: 
            void disp();
            void  getValue()
            { n=5; }
            friend void swap(A &,B &);
};

void A :: disp()
{
    cout << "\n m=" <<m;
}

void B :: disp()
{
    cout << "\n n=" <<n;
}

void swap(A &a,B &b)
{
    int temp;
    temp = a.m;
    a.m = b.n;
    b.n = temp;
}

int main()
{
            A a;
            B b;
            a.getValue();
            b.getValue();
            cout << "\nValue before swap";
            a.disp();
            b.disp();
            swap(a,b);
            cout << "\nValue After swap";
            a.disp();
            b.disp();
    return 0;
}