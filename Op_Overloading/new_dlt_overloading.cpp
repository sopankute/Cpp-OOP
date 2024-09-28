
// New and Delete operator overloding
// 1. Two types of Overloading
//     a. Local Overloading (class/struct)
//     b. Global overloading
// 2. syntax for new
//     void * operator new (size_t size){}
// 3. syntax for delete
//     void operator delete(void*){}
// 4. Both new and delete are static member function(don't have the access of this pointer)
// 5. don't forget to overload for array verion of both.
// 6. can have multiple new/delete operator function.


#include<iostream>
using namespace std;

class Test{
    double x;
public :
    Test(double x=0): x{x}{}
    void * operator new(size_t size){
        cout<<"new operator size : "<<size<<endl;
        void * ptr = malloc(size);
        return ptr;
    }
    void operator delete(void * p){
        cout<<"delete operator : "<<endl;
        free(p);
    }
};
void * operator new[](size_t size){
        cout<<"Array new operator size : "<<size<<endl;
        void * ptr = malloc(size);
        return ptr;
    }
    void operator delete[](void * p){
        cout<<"Array delete operator : "<<endl;
        free(p);
    }
int main(){
    Test *T1 = new Test();      // new operator size : 4(int)/8(double)/1(char)
    delete T1;

    // will call Array version of New and Delete
    int *x = new int[10];   // Array new operator size : 40
    delete[] x;             // Array delete operator :

    return 0;
}