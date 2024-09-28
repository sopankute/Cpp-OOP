#include<iostream>
using namespace std;

// 2 places can apply templates
// 1. Function Templates
// 2. Class Templates

template <typename T>
T getMax(T x, T y){
    return x>y ? x : y;
}

// int getMaxInt(int x, int y){
//     return x>y ? x : y;
// }
// char getMaxChar(char x, char y){
//     return x>y ? x : y;
// }

int main(){
    int a=34, b=78;
    // cout<<getMaxInt(a,b)<<endl;          // 78
    cout<<getMax(a,b)<<endl;        // 78

    char c1 = 'q', c2 = 'x';
    // cout<<getMaxChar(c1,c2)<<endl;       // x
    cout<<getMax(c1,c2)<<endl;      // x
    return 0;
}