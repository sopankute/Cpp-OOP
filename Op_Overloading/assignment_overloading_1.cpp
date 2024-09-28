
#include<iostream>
using namespace std;

class Base{
    int y;
public :
    Base(int y=0):y{y} {}
    void show(){
        cout<<"Y : "<<y<<endl;
    }
    friend class Test;
};

class Test{
    int *x;
public :
    Test(int val=0):x{new int(val)} {}

    void setX(int val){
        *x = val;
    }
    void print(){
        cout<<"*X : "<<*x<<endl;
    }
    ~Test(){delete x;}

    Test& operator = (const Base& obj){
        *x = obj.y;
        return *this;
    }


};
int main(){
    Test T1(10);
    T1.print();     // *X : 10
    Base B1(20);
    T1 = B1;
    B1.show();      // Y : 20
    T1.print();     // *X : 20

    return 0;
}