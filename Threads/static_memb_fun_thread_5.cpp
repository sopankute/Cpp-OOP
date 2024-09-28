// 4. Static Member function 

#include<iostream>
using namespace std;
#include<thread>
using namespace std::chrono;

class Test{
public :
    // Static Member function 
    static void print(int x){
        while(x-- >0){
            cout<<x<<"  ";      // 9  8  7  6  5  4  3  2  1  0 
        }
    }
};
int main(){                    
    std :: thread t(&Test::print, 10);     // calling syntax
    t.join();                 
    return 0;
}