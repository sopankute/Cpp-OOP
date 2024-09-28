#include<iostream>
using namespace std;

void passBypoint(int* x){                   
    cout<<"the value of *x : "<<*x<<endl;   // 10
    cout<<"the value of x : "<<x<<endl;     // 0x61ff0c
    *x += 10;
}
int main(){
    int val = 10;
    cout<<"value pass before the fun : "<<val<<endl;    // 10

    passBypoint(&val);
    cout<<"Value pass before the fun : "<<val<<endl;    // 20
    cout<<"Value pass before the fun : "<<&val<<endl;    // 0x61ff0c

    return 0;
}