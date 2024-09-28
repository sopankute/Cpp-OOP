#include<iostream>
using namespace std;


class Test{
    public :
        virtual void fun(int x){
            cout<<"Test fun..."<<endl;
        }
};
class Derived : public Test{
    public :
        void fun (int y) override {
            cout<<"Derived fun..."<<endl;
        }
};
int main(){
    Test* T1 = new Derived();
    T1->fun(5);                  // Derived fun...

    Derived d;
    Test &T2 = d;                // Derived fun...
    T2.fun(8);

    
    return 0;
}