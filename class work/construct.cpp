#include <iostream>

using namespace std;

class complex
{
            int real,imag;
    public:
            construct(int x,int y)
            {
                real = x;
                imag = y;
            }

            void disp()
            {
                cout<<"The sum of two complex no is :"<<real <<"+"<<imag<<"i";
            }

            int complexSum(complex a,complex b)
            {
                complex c;
                c.real = a.real + b.real;
                c.imag = a.imag + b.imag;

                return c;
            }
};

int main()
{   int a,b;
    complex c1(5,10);
    complex c2(10,20);
    c1.complexSum(5,10);  
    c2.complexSum(10,20);
    c1(a,b);

    return 0;
}