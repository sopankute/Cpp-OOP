#include<iostream>
using namespace std;


// thi much effort To access private member only 

class Test{
    int x, y;
public : 
    Test(){}

    Test(int a, int b):x{a},y{b}{}

    void set(int a, int b){
        x = a;
        y = b;
    }
    void get(){
        cout<<"test class member : "<<x<<"  "<<y<<endl;
    }
    friend class FriendOfTest;      // friend of class Test
};
class FriendOfTest{
public :
    void set(Test& obj, int a, int b){
        obj.x = a;
        obj.y = b; 
    }
    void get(Test& obj){
        cout<<"friend class member : "<<obj.x<<"  "<<obj.y<<endl;     // able to access coz of Friendship
    }
};

int main(){

    Test T1;
    Test T2(10,20);
    T2.get();           // test class member : 10  20
    FriendOfTest fot;
    fot.get(T2);        // friend class member : 10  20
    fot.set(T2, 30, 40);
    fot.get(T2);        // friend class member : 30  40

    return 0;
}