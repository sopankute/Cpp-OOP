#include<iostream>
using namespace std;


class Test{
    char x;
    int y;
    int z;
public :
    Test(int a) : x{a}{         // warning: narrowing conversion of 'a' from 'int' to 'char' inside { }
        cout<<(int)x<<endl;     // 44
    }
    Test(int a, int b) : y(a),z(b){
        cout<<y<<" "<<z<<endl;          // 200 300
    }

};
int main(){
    Test T1(300);
    Test T2(200,300);
    return 0;
}