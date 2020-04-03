#include<iostream>
using namespace std;

class B;//forward declaration

class A
{   private:
    int numA;
    public:
        int getA()
        {numA = 12;}
        //friend function declaration
        friend int add(A,B);
};


class B
{   private:
    int numB;
    public:
        int getB()
        {numB = 1;}
        //friend function declaration
        friend int add(A,B);
};

int add(A objA, B objB)
{
    return (objA.numA + objB.numB);
}

int main()
{
    A a;
    B b;
    a.getA();
    b.getB();
    cout <<"\n Sum = "<<add(a,b);
}