
#include<iostream>
using namespace std;

class Test{
    int * x;        // pointer in class
public :
    Test(int val=0):x{new int(val)}{}

    void setX(int val){
        *x = val;
    }
    void print(){
        cout<<"X : "<<*x<<" "<<&x<<endl;
    }
    Test& operator = (const Test& obj){
        if(this != &obj){      // this holding T2 address(calling on this T2 obj) compared with T1 obj
                               // if both T1 & T2 not equal the only assign value 
            *x = *obj.x;
            return *this;      // T2
        }
    }
    ~Test(){delete x;}
};
int main(){
    Test T1(10);
    Test T2, T3;
    (T2 = T3) = T1;
     
    // same as above
    // T2 = T3;        // T2 = 0, T3 = 0
    // T2 = T1;        // T2 = 10

    T1.print();     // X : 10 0x61ff0c
    T2.print();     // X : 10 0x61ff08
    T3.print();     // X : 0 0x61ff04
    return 0;
}