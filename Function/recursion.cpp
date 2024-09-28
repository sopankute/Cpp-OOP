#include<iostream>
using namespace std;

void print(int times){
    if(times == 0)
        return;
    cout<<" Cpp "<<times<<endl;     // 4 3 2 1
    --times;
    print(times);
    cout<<"Recursion "<<times<<endl;    // 0 1 2 3 
}
int main(){
    print(4);
    return 0;
}