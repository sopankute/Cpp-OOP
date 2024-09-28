// 2. Lambda Function 

#include<iostream>
#include<thread>
using namespace std;
using namespace std :: chrono;

int main(){   
    /*    
    auto print = [](int x ){
        // body      ^ args list inside '()'
        while(x-- > 0){
            cout<<x<<"  ";      // 9  8  7  6  5  4  3  2  1  0 
        }
    };
    */
   // can directly inject lambda function at thread creation time.
    std::thread T([](int x){
            while(x-- > 0){ cout<<x<<"  ";}
            }, 10);
    T.join();

    return 0;
}