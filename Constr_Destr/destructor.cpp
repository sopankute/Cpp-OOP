#include<iostream>
using namespace std;

class Test{
    int *x;
public :
    Test() : x(nullptr){
        cout<<"Default constructor"<<endl;
    }
    Test(int *a) : x(a){
        cout<<"Parameterized constructor"<<endl;
    }
    ~Test(){        // Implicit called and can be explicitly called 
        delete x;
        cout<<"Destructor"<<endl;
    }

};
int main(){
    Test T1;
    Test T2(new int(10));
    // int *ptr = new int(10);
    // Test T2(ptr);
    return 0;
}