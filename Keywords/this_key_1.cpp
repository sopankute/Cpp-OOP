#include<iostream>
using namespace std;

class Test 
{ 
private: 
  int x; 
public: 
  Test(int x = 0) { this->x = x; } 
  void change(Test *t) { 
    *this = *t;
    cout<<" "<<this<<" "<<t<<endl;
   } 
  void print() { cout << "x = " << x << endl; } 
}; 
  
int main() 
{ 
  Test obj(5); 
  Test *ptr = new Test (10);
  obj.change(ptr); 
  cout<<ptr<<endl;
  obj.print(); 
  return 0; 
} 

        // ptr---> [10] <---t
        // 0x10    0x22   0x14
        // ptr = 0x1147f40
        // t = 0x1147f40
        // this = 0x62ff08