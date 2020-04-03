#include <iostream>
using namespace std;

class Minus
{
    int a,b;
    public:
        Minus()
        {
            a = 2;
            b = 3;
        }

        void display()
        {
            cout <<"\n a = "<<a;
            cout <<"\n b = "<<b;
        }

        void operator --()
        {
            a = --a;
            b = --b;
        }
};

int main()
{
    Minus x;
    --x;
    x.display();
}