#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
private: 
    int l,b,h;
public:

    Box(){
        l= 0;
        b = 0;
        h =0;
    }

    Box(int length, int breadth , int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box &A){
       l = A.l;
       b = A.b;
       h = A.h;
    }

    int getLength(){

        return l;

    }
    
    int getBreadth(){

        return b;

    }
    
    int getHeight(){

        return h;

    }

    long long CalculateVolume(){ return l*b*h;}

};
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

