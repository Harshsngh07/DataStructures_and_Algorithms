#include<iostream>
using namespace std;


class Complex
{
    
        int real,imag;
    public:
        Complex ()
        {
            real = 0;
            imag = 0;
        }

        Complex(int x,int y)
        {
            real = x;
            imag = y;
        }
        void display()
        {
            cout <<"\nreal = "<<real;
            cout <<"\nimag = "<<imag;
        }

        Complex operator +(Complex C1)
        {
            Complex temp;
            temp.real = real + C1.real;
            temp.imag = imag + C1.imag;
            return (temp);
        }
};

int main()
{
    Complex c1(2,3);
    Complex c2(5,8);
    Complex c;
    c = c1+c2;
    cout << "\n First Complex no";
    c1.display();
    cout << "\n Second Complex no";
    c2.display();
    cout <<"\n Result =";
    c.display();
}