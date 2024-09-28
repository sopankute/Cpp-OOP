#include<iostream>
using namespace std;

class Point{
    double x;
    double y;
public : 
    Point(){    // default constructor initialize parameters with default value
        x = 0;
        y = 0;
        cout<<"Default constructor : "<<x<<" & "<<y<<endl;
    }
    Point(double X, double Y){
        x = X;
        y = Y;
        cout<<"Parameterized constructor : "<<x<<" & "<<y<<endl;
    }
    Point(const Point & rhs){
        x = rhs.x;
        y = rhs.y;
        cout<<"Copy constructor : "<<x<<" & "<<y<<endl;
    }

    double getX(){return x;}
    double getY(){return y;}
};
int main(){
    Point P1;           // Default constructor : 0 & 0
    Point P2(1.3, 4.5); // Parameterized constructor : 1.3 & 4.5
    Point P3 = P1;      // Copy constructor : 0 & 0
    Point P4(P2);       // Copy constructor : 1.3 & 4.5

    cout<<P2.getX()<<endl;  // 1.3
    cout<<P2.getY()<<endl;  // 4.5

    cout<<P3.getX()<<endl;  // 0
    cout<<P3.getY()<<endl;  // 

    return 0;
}