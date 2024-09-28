// Pure Virtual Function

// 5.2 Pure Virtual Function
//  -> If creating Pure Virtual Function in Base class then that class become *Abstract class*. 
//     Then Derived class needs to override that pure virtual function.
//     if not then Derived class also becomes Abstract class.
//     Abstract classes not Instantiable (can't create an Object).
//     But Pointers and Reference can be create.

#include<iostream>
using namespace std;

class Test{
    public :
        virtual void fun1() = 0;        // Pure Virtual function(Don't have Body)(Abstract Class)
};
void Test :: fun1(){
    cout<<"Virtual function can have body"<<endl; 
}
class Derived : public Test{
    public :

        void fun1(){
            Test :: fun1();     // can call pure virtual fun of Base class 
             
            cout<<"Overriding pure virtual function in derived class"<<endl;
        }
};
int main(){
    Derived d;
    d.fun1();               // Calling Pure Virtual Function
    // Virtual function can have body
    // Overriding pure virtual function in derived class

    return 0;
}