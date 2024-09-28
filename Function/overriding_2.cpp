#include<iostream>
using namespace std;


class Test{
    public :
        virtual void fun(){
            cout<<"Test fun..."<<endl;
        }
};
class Derived : public Test{
    public :
        void fun(int x){
            cout<<"Derived fun..."<<endl;
        }
};
int main(){
    Test* T1 = new Derived();
    T1->fun();                  // Test fun...
    // T1->fun(5);                  // no matching function for call to 'Test::fun(int)'
    return 0;
}