#include<iostream>
using namespace std;

// Operator Overloading works with only class & struct (user defined types)
// the Operator we can't overload
// 1) ::
// 2) ?:
// 3) .
// 4) *
// 5) sizeof
// 6) typeid

// '+' & '-' Operator Overloading

class Point{
    int x;
    int y;
public :
    Point(int x=0, int y=0):x{x},  y{y}{}
    // '+' Operator Overloading
    Point operator + (Point const & rhs){   // return_type operator 'sign' (){}
            // P1                   P2      
        Point P;                            // To return value
        P.x = x + rhs.x;
        P.y = y + rhs.y;
        return P;
    }
    // '-' Operator Overloading
    Point operator - (const Point& rhs){
        Point P;
        P.x = x - rhs.x;
        P.y = y - rhs.y;
        return P;
    }

    Point add(const Point& rhs){
        Point P;
        P.x = x + rhs.x;
        P.y = y + rhs.y;
        return P;
    }
    void print(){
        cout<<"x : "<<x<<"  y : "<<y<<endl;
    }
};
int main(){
    Point P1(1,2), P2(3,4);     // User defined Data types
    Point P3 = P1 + P2;         
    Point P4 = P3 - P1;  
    Point P5 = P1.add(P2);       
    P3.print();                  // x : 4  y : 6  
    P4.print();                  // x : 3  y : 4
    P5.print();                  // x : 4  y : 6

    return 0;

}