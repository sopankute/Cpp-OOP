// Introduction To Virtual Function

// 1. Why to use virtual function?
// -> To Achieve Dynamic Polymorphism. Call Derived Class Functions using Base class Pointer/Reference.

// 2. How to implement virtual functin?
// -> By declaring Function as *Virtual* in Base class and Overriding that function in Derived class.
//    (Function Signature should be same)
// 3. Virtual function can't be Static and also Friend function of Another class.
// 4. class can have Virtual Destructor but can't have Virtual Constructor.   
// 5.1 Virtual Function 
// 5.2 Pure Virtual Function
//  -> If creating Pure Virtual Function in Base class then that class become *Abstract class*. 
//     Then Derived class needs to override that pure virtual function.
//     if not then Derived class also becomes Abstract class.
//     Abstract classes not Instantiable (can't create an Object).

#include<iostream>
using namespace std;

class Test{
    public :
        virtual void fun(){
            cout<<"Parent Test fun..."<<endl;
        }

        virtual void fun1() = 0;        // Pure Virtual function(Don't have Body)(Abstract Class)
};
void Test :: fun1(){
    cout<<"Virtual function can have body"<<endl; 
}

class Derived : public Test{
    public :
        void fun(){
            cout<<"Child Derived fun..."<<endl;
        }

        void fun1(){
            Test :: fun1();     // can call pure virtual fun of Base class 
             
            cout<<"overriding pure virtual function in derived class"<<endl;
        }
};
int main(){
    Derived d;
    d.fun();                // Child Derived fun...

    d.fun1();               // Calling Pure Virtual Function
    // Virtual function can have body
    // overriding pure virtual function in derived class

// Refernce                 (Function/Dynamic Overriding)
    Test &T1 = d;
    d.fun();                // Child Derived fun...

// Pointer 
    Test* T2 = new Derived();
    // without virtual
    // T2->fun();           // Parent Test fun...

    // with virtual         (Function Overriding)
    T2->fun();              // Child Derived fun...

// Pure Virtual function
     Derived d1;            // object of abstract class type "Derived" is not allowed



    return 0;
}