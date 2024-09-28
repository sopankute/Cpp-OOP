#include<iostream>
using namespace std;

class Test{
    int x;
public :
    Test(){cout<<"Default constructor"<<endl;}

    Test(int a):x{a}{cout<<"parameterized constructor : "<<this->x<<endl;}

    void set(int a){
        this->x = a;
    }
    int get(){
        return this->x;
    }
};
int main(){
    Test T1;
    Test T2(20);
    // cout<<"X : "<<T1.get()<<endl;   //Garbage value
    cout<<"X : "<<T2.get()<<endl;   // 20

    T2.set(30);
    cout<<"X : "<<T2.get()<<endl;   // 30
    return 0;
}