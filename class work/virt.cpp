#include <iostream>
using namespace std;

class Animal
{
    public:
            void features()
            {
                cout <<"\n I am an animal.";
            }
};


class Mammal : public Animal
{
    public:
            void features()
            {
                cout <<"\n I am a Mammal.";
            }
};


class Reptile : public Animal
{
    public:
            void features()
            {
                cout <<"\n I am a Reptile.";
            }
};

int main()
{
    Animal *obj1 = new Animal;
    Mammal *obj2 = new Mammal;
    Reptile *obj3 = new Reptile;
    obj1 -> features();
    obj2 -> features();
    obj3 -> features();


}