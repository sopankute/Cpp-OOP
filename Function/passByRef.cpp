#include<iostream>
using namespace std;

void passBYReference(int &x){   // Val and x variable pointing to same memory location 

    x += 5;

}

int main(){
    int val = 10;
    cout<<"Value before pass to Fun : "<<val<<endl;
    passBYReference(val);
    cout<<"Value after pass to Fun : "<<val<<endl;
    return 0;
}