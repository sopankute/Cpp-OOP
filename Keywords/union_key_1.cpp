#include<iostream>
using namespace std;

union myUnion{          //                    byte[0]      byte[1]      byte[2]      byte[3]
    char bytes[4];      // 1 byte = 8 bits  [0000 0000]  [0000 0000]  [0000 0000]  [0000 0000]
    unsigned int value;
};

int main(){

    myUnion un;
    un.value = 0;
    un.value = 2;
    cout<<(int)un.bytes[0]<<endl;   // 2
    cout<<(int)un.bytes[1]<<endl;
    cout<<(int)un.bytes[2]<<endl;
    cout<<(int)un.bytes[3]<<endl;
    cout<<endl;
                                //      consider as 1
     un.value = 257;            // 257 = [0000 0001]  [0000 00001]
    cout<<(int)un.bytes[0]<<endl;   // 1              consider as 1
    cout<<(int)un.bytes[1]<<endl;   // 1
    cout<<(int)un.bytes[2]<<endl;
    cout<<(int)un.bytes[3]<<endl;
    cout<<endl;
                                    //      consider as 1
     un.value = 259;            // 257 = [0000 0011]  [0000 0001]  [0000 0000]  [0000 0000]
    cout<<(int)un.bytes[0]<<endl;   // 3              consider as 1
    cout<<(int)un.bytes[1]<<endl;   // 1
    cout<<(int)un.bytes[2]<<endl;
    cout<<(int)un.bytes[3]<<endl;

    return 0;
}