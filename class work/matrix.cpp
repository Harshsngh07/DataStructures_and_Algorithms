#include <iostream>
using namespace std;

class Matrix
{
        int m[3][3] = {0};
    public:
        Matrix(int x)
        {
            m[3][3] = x;
        }

        void display()
        {
            cout << "\n sum = " << m[3][3];
        }

        void add(Matrix m1,Matrix m2)
        {
            m[3][3] = m1.m[3][3] + m2.m[3][3];
        }

};      

int main()
{
    Matrix m1()
    
    return 0;

}