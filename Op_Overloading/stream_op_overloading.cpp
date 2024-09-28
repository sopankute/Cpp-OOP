
// Extraction'<<' and Insertion '>>' Operator Overloading
// these can't be class member function, need to make them friend function
// used to output user defined type(class & struct)

#include<iostream>
using namespace std;

class Test{
    int x;
public :
    Test(int x=0):x{x}{}
    friend istream& operator >> (istream& input, Test& obj);
    friend ostream& operator << (ostream& output, Test& obj);
};

istream& operator >> (istream& input, Test& obj){   
    input >> obj.x;
    return input;       // return istream obj
}
ostream& operator << (ostream& output, Test& obj){
    output << obj.x << endl;
    return output;      // return ostream obj
}

int main(){
    Test T1;
    cin >> T1;      // 25 - input
    cout << T1;     // 25 - output
    return 0;

}