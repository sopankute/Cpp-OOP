#include<iostream>
using namespace std;

class Test{
private :
    int x;
    int y;
    mutable int z;
public :
    Test(){}
    Test(int a, int b, int c):x{a}, y{b}, z{c}{}

    void get_1() {
        x = 55;                 // x can be chenged
        cout<<"private X changed with normal fun : "<<x<<endl;
    }
    void get_2() const {
        // y = 66;                 // y can't be chenged coz const fun
        cout<<"private Y not changed with const fun : "<<y<<endl;
    }
    void get_3() const {
        z = 77;                 // to change z in const fun make it as *mutable*
        cout<<"private Z changed with const & mutable : "<<z<<endl;
    }
};
int main(){
    Test T1;
    int a=11, b=22, c=33;
    Test T2(a, b, c);
    T2.get_1();         // changed with normal fun
    T2.get_2();         // not changed with const fun
    T2.get_3();         // changed with const & mutable
    return 0;
}