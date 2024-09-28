#include<iostream>
using namespace std;

// C++ allows overload Member(class) function on the basis of Const and Non-const
class Test{
    int x;
    public : 
        Test(int x=0):x(x){}
    void fun(){
        cout<<"Non Const Function."<<endl;
    }
    void fun() const {
        cout<<"Const Function."<<endl;
    }
};
int main(){
    Test obj1;
    const Test obj2;
    obj1.fun();         // Non Const Function.
    obj2.fun();         // Const Function.
    return 0;
}