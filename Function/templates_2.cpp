#include<iostream>
using namespace std;

// 2 places can apply templates
// 1. Function Templates
// 2. Class Templates

// template <class R1, class T1, class T2>
template <class T1, class T2>

// R1 getMax(T1 x, T2 y){
//     return x>y ? x : y;
// }
auto getMax(T1 x, T2 y){
    return x>y ? x : y;
}

int main(){
    // cout<<getMax<double>(45.273, 23)<<endl;         // 45.273
    cout<<getMax(45.273, 23)<<endl;                 // 45.273
    return 0;
}