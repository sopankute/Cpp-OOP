// Virtual Destructor

// 1. If Delete Child class object through Pointer of Parent class then it is Undefined.
//    if Parent class doesn't have virtual Destructor.
// 2. If fail to declare Destructor as Virtual in Parent class then we endup having Memory Leak.

#include<iostream>
using namespace std;

class Test{
    public :
        Test(){
            cout<< "Base Constructor "<<endl;
        }
        virtual ~Test(){
        // ~Test(){
            cout<< "Base Destructor "<<endl;
        }
};
class Derived : public Test{
    public :
        Derived(){
            cout<< "Derived Constructor "<<endl;
        }
        ~Derived(){
            cout<< "Derived Destructor "<<endl;
        }
};
int main(){ 

// With Virtual
    cout<<"With Virtual Destructor..."<<endl;

    Test *T1 = new Derived();       
        // Base Constructor 
        // Derived Constructor
    delete T1; 
        // Derived Destructor
        // Base Destructor
    cout<<endl;

    Derived D;
    cout<<sizeof(D)<<endl;      // 4 byte(32-bit) & 8 byte(64-bit)

// Without Virtual
    cout<<"Without Virtual Destructor..."<<endl;
    // Derived D1;
    // //     Base Constructor 
    // //     Derived Constructor
    // //     Derived Destructor
    // //     Base Destructor
    // cout<<sizeof(D1)<<endl;      // 1 byte

    // Derived *D1 = new Derived();     
    //     // Base Constructor  
    //     // Derived Constructor
    // delete D1;                       
    //     // Derived Destructor  
    //     // Base Destructor
   

    // Test *T2 = new Derived();       
    //     // Base Constructor 
    //     // Derived Constructor
    // delete T2;                      
    //     // Base Destructor

    

    return 0;
}