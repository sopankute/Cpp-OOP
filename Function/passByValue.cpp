#include<iostream>
using namespace std;

void fun(int w, int x, int y=20, int z=30){

    cout<<w<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}
int main(){

    int a=55, b=66, c=77, d=88;

    // fun(a,b,c,d);       // 55 66 77 88

    // fun(55,b,c);        // 55 66 77 30
    
    // fun(b,c);           // 66 77 20 30

    fun(a,d);             // 55 88 20 30

    return 0;
}