// 4. Non-Static Member function 

#include<iostream>
using namespace std;
#include<thread>
using namespace std::chrono;

class Test{
public :
    // Non-Static Member function 
    void print(int x){
        while(x-- >0){
            cout<<x<<"  ";      // 9  8  7  6  5  4  3  2  1  0 
        }
    }
};
int main(){
    Test T1;                    
    std :: thread t(&Test::print, &T1, 10);     // calling syntax
    t.join();                  //  ^ address of object
    return 0;
}