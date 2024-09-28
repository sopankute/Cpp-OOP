#include<iostream>
using namespace std;

class Test{
    const string pName;
public : 

    Test(string str):pName{str}{
        cout<<"constructed"<<endl;
    }

    string getPname(){
        return pName;
    }
    // void setPname(string str){   // Error
    //     pName = str;
    // }
};
int main(){
    Test T1("Moto Edge 5"), T2("I-Phone 14 Pro");
    cout<<T1.getPname()<<endl;  // Moto Edge 5
    cout<<T2.getPname()<<endl;  // I-Phone 14 Pro

    // trying to change const
    // T1.setPname("Moto Edge Neo pro");   // Error
    return 0;
}