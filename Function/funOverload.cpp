#include<iostream>
using namespace std;

/*
Function Overloading will *NOT* work

1. Function diclaration differ only in Return type with same arguments.
2. In class, Same function name and parameter but 1 static and another not static.
3. The Fun receiving array as Pointer and Array both are similar. 
4. const and volatile parameter doesn't make any difference.
5. One fun. taking parameter as Function Type and another taking as Function Pointer
    int fun(int ()){}
    int fun(int(*)()){}
6.Function with equal parameters with differ in default arguments.

*/

// Function Overloading and Ambiguity
// Type Conversion.
void typeConver(int i){
    cout<<i<<endl;
}
void typeConver(double j){  // float constant treated as double not float, float <-> double
    cout<<j<<endl;
}

// Function with default arguments.
void defaultArgs(int x){
    cout<<"X : "<<endl;
}
void defaultArgs(int x, int y=20){
    cout<<"X & Y : "<<x<<" & "<<y<<endl;
}

// Function with pass-by-reference.
// (3. The Fun receiving array as Pointer and Array both are similar.)
void passByRef(int x){
    cout<<"Pass By value 1 : "<<x<<endl;
}
void passByRef(int& y){
    cout<<"Pass By Reference 2 : "<<y<<endl;
}

class Base{
    public : 
    static int fun1(int a, int b){
        return a + b;
    }
    static double fun1(int a, int b, double c){
        return a + b + c;
    }
};

int main(){

  
    typeConver(5);
    typeConver(4.4);

    // defaultArgs(13);    // call of overloaded 'defaultArgs(int)' is ambiguous

    int a = 13;
    passByRef(2);          // Pass By value 1 : 2
    // passByRef(a);       // call of overloaded 'passByRef(int&)' is ambiguous

    Base b;
    int sum = b.fun1(4,5);
    cout<<"sum : "<<sum<<endl;      // sum : 9

    double sum1 = b.fun1(4,5,6.56);
    cout<<"sum : "<<sum1<<endl;     // sum : 15.56

    return 0;
}
