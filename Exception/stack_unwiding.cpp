#include<iostream>
using namespace std;

class X{
    public : 
        X(){
            cout<<"Constructor of X"<<endl;
        }
        ~X(){
            cout<<"Destructor of X"<<endl;
        }
};
class Y{
    public : 
        Y(){
            cout<<"Constructor of Y"<<endl;
        }
        ~Y(){
            cout<<"Destructor of Y"<<endl;
        }
};
int main(){

    try{
        cout<<"In try block"<<endl;
        X x;
        Y y;
        throw("Exception thrown for in try block of main()");
    }
    catch(const char* e){
        cout<<"Exception : "<<e<<endl;
    }
    catch(...){
        cout<<"some exception catch in main()"<<endl;
    }
    cout<<"exception resume"<<endl;
    return 0;

}