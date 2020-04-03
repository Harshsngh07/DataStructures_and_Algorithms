#include <iostream>
using namespace std;

template <class T>
class A
{

    public:
    T num1 = 5;
    T num2 = 6;
        void add()
        {
            cout <<"\n Addition of two numbers is = "<<num1+num2;
        }
};

int main()
{
    A<int> d;
    d.add();
}