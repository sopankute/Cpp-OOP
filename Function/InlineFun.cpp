#include<iostream>
using namespace std;

inline void fun(string str){    // inline stack
    cout<< str<< endl;
}
int main(){     // main stack

        for(int i=0; i<1000; i++){
            fun("Cpp program");     // Compiler will replace this call statement with inline function Body.
        }

    return 0;
}

// Advantage
// 1. Function calling Overhead reduced.
// 2. Variables push/pop on stack reduced.
// 3. Return call from function reduced cos to return value compiler writes some code.
// 4. Increase the locality of reference by utilizing instruction cache.