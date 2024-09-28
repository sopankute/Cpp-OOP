#include<iostream>
using namespace std;

union myUnion{
    int x;      // 4  all member share biggest same memory location, here int(4)
    short y;    // 2
    char z;     // 1
};

union Sqare{
    int width;
    int height;
};
int getArea(int width, int height){
    return width*height;
}
int main(){
    Sqare obj;
    obj.width = 10;
    cout<<getArea(obj.width, obj.height)<<endl; // 100
    return 0;
}

