
// Unary Operator Overloading '-'(Minus operator)

#include<iostream>
using namespace std;

class Point{
    int x;
    int y;
public :
    Point(int x=0, int y=0):x{x}, y{y}{}
    Point operator - (){
        return Point(-x, -y);   // return object with unary operator
    }
    void print(){
        cout<<"x : "<<x<<"  y : "<<y<<endl;
    }
};

int main(){
    Point P1(1,2), P2;
    P1.print();         // x : 1  y : 2
    P2.print();         // x : 0  y : 0
    Point P3 = -P1;     // x : -1  y : -2
    P3.print();
    return 0;
}