#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
        Complex()
        {
            real = 0;
            img = 0;
        }
        Complex(int x,int y)
        {
            real = x;
            img = y;
        }

        void display()
        {
            cout <<"\n"<<real<<"+i"<<img<<endl; 
        }

        Complex operator +(Complex c1)
        {
            Complex temp;
            temp.real = real + c1.real;
            temp.img = img + c1.img;
            return (temp);
        }
};

int main()
{
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c;
    cout <<"\n First complex no =";
    c1.display();
    cout <<"\n Second complex no =";
    c2.display();
    c = c1+c2;
    cout <<"\n Result=";
    c.display();

}