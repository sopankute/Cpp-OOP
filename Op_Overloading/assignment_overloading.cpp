
// Assignment Operator Overloading
// 1. used when data members pointers in class(deep copy)
// 2. comes under the Binary operator overloading
// 3. Assignment OPerator overloading by No-Static member function

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
    Test T2;
    T2 = T1;
    T1.setX(20);
    
// Before
    // T1.print();     // X : 20
    // T2.print();     // X : 20

// After
    T1.print();     // X : 20   0x61ff0c
    T2.print();     // X : 10   0x61ff08
    return 0;
}
        //              Heap
        //       [10]          [0]
        //       0x11          0x22
                 
        //        T1            T2             {T2=T1} (Address assignment)
        //      [0x11]        [0x22] change to  [ox11]
        //    holding *x     holding *x 
        //                 T2 lose 0x22 point to [0x11] 
        //                 when change T1, T2 will change 
        //                 T1 & T2 point to same loc. 
        //                 at time of delete, 2 times deleting memory [0x11]
        //                 and there will be lose memory also[0x22]





