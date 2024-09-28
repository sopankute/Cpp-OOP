#include<iostream>
using namespace std;

// Making class non-inheritable without using final keyword
// 1. Make Default Constructor of final class as Private
// 2. Inherite final class as virtual in our class which we want to make non-inheritable
// 3. Make our class as Friend in Final class

// virtual inheritance - Derived -> Base() and Derived -> FinalClass()
// Non-virtual inheritance - Derived -> Base() -> FinalClass()

class FinalClass{
    private : 
        FinalClass(){cout<<"Final constructor"<<endl;}      // Point 1
        friend class Test;  // Point 3
};
class Test : public virtual FinalClass{
    public :
        Test(){cout<<"Test constructor"<<endl;}
};
// class Derived : public Test{
//     public :
//         Derived(){cout<<"Derived constructor"<<endl;}         // "FinalClass::FinalClass()" is inaccessible
// };
int main(){

// With virtual FinalClass 
    // Derived d;      // error: 'FinalClass::FinalClass()' is private

// Without virtual FinalClass
    // Final constructor
    // Test constructor
    // Derived constructor

    // Test T1;
    // Final constructor
    // Test constructor

// without Derived class + with virtual FinalClass
    // Test T2;
    // Final constructor
    // Test constructor

    return 0;
}