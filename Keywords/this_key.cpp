#include<iostream>
using namespace std; 

// Notes
// 1. this pointer used to hold address of current object.
// 2. this pointer is a const pointer.
// 3. it's not passed to static memeber function.
// 4. passed as hidden argument to non-static member function. 

class Test{
    int x;
public :
    Test(){}

    Test(int a):x{a}{}

    void set(int a){x = a;}
    // void set(Test * const this, int a){
    //     this->x = a;
    // }

    int get(){return x;}
    // int get(Test * const this){
    //     return this->x;
    // }

};
int main(){
    Test T1;
    Test T2(10);
    cout<<T2.get()<<endl;   // 10
    // compiler code 
    // Test::get(&T2);

    T2.set(20);
    // compiler code 
    // Test::set(&T2,20);

    cout<<T2.get()<<endl;   // 20

    return 0;
}