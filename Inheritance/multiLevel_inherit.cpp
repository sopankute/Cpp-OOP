#include<iostream>
using namespace std;

// Multi Level Inheritance
class Animal{

};
class Cat : public Animal{

};
class IndianCat : public Cat{

};
int main(){
    Animal A;
    Cat C;
    IndianCat Ic;

    return 0;
}