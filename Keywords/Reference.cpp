#include<iostream>
using namespace std;

class Test{
    int &x;     // can be changed (private) this is refering to *val* variable
public :
    Test(int& a):x{a}{
        cout<<"Constructed"<<endl;
    }
    void print(){
        cout<< " X : "<<x<<endl;
    }
};
int main(){
    int val = 10;
    Test T1(val);
    T1.print();     // 10
    val = 20;
    T1.print();     // 20   (private reference can be changed)
    return 0;
}