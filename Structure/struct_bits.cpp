#include<iostream>
using namespace std;

struct Date{
    unsigned int d : 5;     // days in month - 31 [2^5 = 32] 5 bits need to store 31 days 
    unsigned int m : 4;     // month in year - 12 [2^4 = 15] 4 bits need to store 12 month
    unsigned int y;
};

struct Node{
    // static unsigned int x : 5;  // bits field can't be static
};

struct Node1{
    // unsigned int x[10] : 4;     // bits field can't be array type
};

int main(){
    Date D;
    D.d = 8;
    D.m = 9;
    D.y = 1989;
    cout<<D.d<<"/"<<D.m<<"/"<<D.y<<endl;
    cout<<sizeof(D)<<endl;        // 8          // before bits 12
    return 0;
}