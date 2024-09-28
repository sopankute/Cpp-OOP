#include<iostream>
using namespace std;

// const member, can not be changed once initialized.
// 1. Initialize in class
// 2. Initializer list used to initialize them from outside class using constructor.

class Test{
    const float pi = 3.142;
    float r;
public :
    Test(float a){
        r = a;
    }
    float getArea(){
        return r*r*pi;
    }

};
int main(){
    Test T1(5.2), T2(7.9);
    cout<<T1.getArea()<<endl;   // 84.9597
    cout<<T2.getArea()<<endl;   // 196.092
    return 0;
}