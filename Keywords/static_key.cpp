#include<iostream>
using namespace std;

// Static variable is common for all objects.

class Test{

public :
    int x;
    static int y;

    void printX(){ 
        // Static & Non-Static can access
        cout<<"X : "<<x<<endl; 
    }
    static void printY(){
        // only static access
        cout<<"Y : "<<y<<endl;
    }
};

int Test::y;        // undefined reference to `Test::y', if not defined.

int main(){
    Test T1;
    T1.x = 10;
    Test::y = 30;
    
    Test T2;
    T2.x = 20;
    T2.y = 40;

    // cout<<"T1.x : "<<T1.x<<endl;    // 10
    // cout<<"T1.x : "<<T1.y<<endl;    // 40
    // cout<<"T1.x : "<<T2.x<<endl;    // 20
    // cout<<"T1.x : "<<T2.y<<endl;    // 40

    T1.printX();    // 10
    T1.printY();    // 40
    T2.printX();    // 20
    Test::printY();    // 40
    
    
    return 0;
}
