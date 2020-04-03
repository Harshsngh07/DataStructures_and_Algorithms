#include <iostream>
using namespace std;

class Time
{
        int h,m,s;
    public:
        Time()
        {
            
        }

        Time(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }

        void display()
        {
            cout << "\n Hour =" << h <<"\n Min = " << m <<"\n Sec = " <<s;
        } 

        void sum(Time t1,Time t2)
        {
            s = t1.s + t2.s;
            m = t1.m + t2.m + s/60;
            s = s%60;
            h = t1.h + t2.h + m /60;
            m = m%60;
        }
};

int main()
{
    Time t1(2,30,45);
    Time t2(3,26,40);
    Time t3;
    t1.display();
    t2.display();
    t3.sum(t1,t2);
    t3.display();
    return 0;
}