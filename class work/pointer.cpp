#include <iostream>
using namespace std;

class Box
{
  public:
    Box(double l = 2.0,double b = 2.0,double h =2.0)
    {
      cout <<"\n Constructor called."<<endl;
      length = l;
      breadth = b;
      height =h;
    }

    double volume()
    {
      return length*breadth*height;
    }

  private:
    double length,breadth,height;
};

int main()
{
  Box BOX1(3.3,1.2,1.5);
  Box BOX2(8.5,6.0,2.0);
  Box *ptrbox;
  ptrbox = &BOX1;
  cout << "\nVolume of Box1:" <<(*ptrbox).volume()<<endl;
  ptrbox = &BOX2;
  cout << "\nVolume of Box2:" <<(*ptrbox).volume()<<endl;
  return 0;
}