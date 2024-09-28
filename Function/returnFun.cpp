#include<iostream>
using namespace std;

void fun(){
    cout<<"Not return anything "<<endl;
}
void fun1(){
     cout<<"return statement "<<endl;
     return;
}
int main(){
    fun();
    fun1();
    return 0;
}