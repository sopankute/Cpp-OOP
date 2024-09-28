
// TypeCast overloading
// to typecast user defined type 

#include<iostream>
using namespace std;

class Rupee{
    double r;
public :
    Rupee(double r=0):r{r}{}
    void print(){
        cout<<"Rupee : "<<r<<endl;
    }
   
};
class Doller{
    double d;
public :
    Doller(double d=0):d{d}{}
    void print(){
        cout<<"Doller : "<<d<<endl;
    }
     operator Rupee(){
        return Rupee(d*83.23);
    }
};
int main(){
    Doller D1(10);
    Rupee R1;
    R1 = D1;
    D1.print();         // Doller : 10
    R1.print();         // Rupee : 832.3
    return 0;
}