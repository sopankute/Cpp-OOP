#include<iostream>
using namespace std;

// Notes
// 1. "friend" used to make some function/class as friend of class.
// 2. Friend fun can access private/protected/public data member & member function of another class.
// 3. function/class can't be friend of another function.
// 4. friendship is not Inherited & not Mutual.
// not Mutual - if class A friend of calss B, then B can't be friend of A.

class Test{
private :
    int x;
protected :
    int y;

public :
    Test(){}

    Test(int a, int b):x{a}, y{b}{}
    
    friend void set(Test& obj,int a, int b);

    friend void get(Test& obj);
};

void set(Test& obj, int a, int b){
    obj.x = a;
    obj.y = b;
}
void get(Test& obj){
    cout<<obj.x<<"  "<<obj.y<<endl;
}

int main(){
    Test T1;
    Test T2(10,20);
    get(T2);        // without obj call

    set(T2, 30, 40);
    get(T2);        // without obj call

    return 0;
}