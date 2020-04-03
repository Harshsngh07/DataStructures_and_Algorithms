#include <iostream>
using namespace std;

class Distance
{
        int feet , inch;
    public:
        Distance()
        {
            
        }

        Distance(int x,int y)
        {
            feet = x;
            inch = y;
        }

        void display()
        {
            cout << "\n Feet = " << feet <<"\n Inch =" << inch;
        }

        void add(Distance d1,Distance d2)
        {
            inch = d1.inch + d2.inch;
            feet = d1.feet + d2.feet + inch/12;
            inch = inch%12;
        }
};


int main()
{
    
    Distance d1(3,8);
    Distance d2(4,11);
    Distance d3;
    d1.display();
    d2.display();
    d3.add(d1,d2);
    d3.display();
    return 0;
}