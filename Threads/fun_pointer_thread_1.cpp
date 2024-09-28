// 1. Function Pointer

#include<iostream>
#include<thread>
using namespace std;
using namespace std :: chrono;

void fun(int x){
    while (x-- > 0){
        cout<<x<<"  ";          // 10  9  8  7  6  5  4  3  2  1  0  
    }
}

int main(){
    std::thread t1(fun, 11);
    t1.join();
    return 0;
}