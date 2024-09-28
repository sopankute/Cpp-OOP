#include<iostream>
using namespace std;

// 1. Const parameters allows function to overload only with * Reference / Pointer *

// Reference
void fun(int &x){ 
    cout<<"value of x : "<<x<<endl; 
}
void fun(const int &x){ 
    cout<<"value of x : "<<x<<endl; 
}

// Pointer
void fun_1(int *x){ 
    cout<<"value of x : "<<*x<<endl; 
}
void fun_1(const int *x){ 
    cout<<"value of x : "<<*x<<endl; 
}

/*
    ** const and volatile parameter doesn't make any difference.
    void fun(int x){ cout<<"value of x : "<<x; }
    void fun(const int x){ cout<<"value of x : "<<x; }
*/

int main(){
    int a = 10;
    const int b = 20;
    fun(a);     // 10
    fun(b);     // 20

    fun_1(&a);     // 10
    fun_1(&b);     // 20
    

    return 0;
}