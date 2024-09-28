#include<iostream>
using namespace std;

int sqaure(int x){
    return x*x;
}
int main(){
    int a = 6, b = 7;
    int *p = &(a);             // no error here 'a' is L-Value and '6' is R-Value
    // int *sum = &(a+b);      // error: lvalue required as unary '&' operand

    // int *sq =  &sqaure(a);      // can't take the address of Rvalue of type 'int'

    int n = 10;
    int & rn = n;          // no error
    // int & rr = 20;      // error:invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
    const int& rr = 40;    // no error, rvalue references can bind with const 
    int && rr1 = 30;

    cout<<rn<<"  "<<rr1<<endl;      // 10  30

// Alternative Operators
    if(1 and 1)                     // true
        cout<<"Helloooo..."<<endl;
    
    if(1 or 1)                      // true
        cout<<"Gooood..."<<endl;
    
    if(1 and 0)                     // false
        cout<<"Morning..."<<endl;

    return 0;
}