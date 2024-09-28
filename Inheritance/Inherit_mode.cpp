#include<iostream>
using namespace std;

class Test{
    private :
        int x;
    protected :
        int y;
    public : 
        int z;
};
class Derived_1 : public Test{
    
        // void print_1(){cout<<"X : "<<x<<endl;}      // not Inherited
    
        void print_2(){cout<<"Y : "<<y<<endl;}      // protected->protected
     
        void print_3(){cout<<"Z : "<<z<<endl;}      // public->public

};
class Derived_2 : protected Test{
    
        // void print_4(){cout<<"X : "<<x<<endl;}      // not Inherited
    
        void print_5(){cout<<"Y : "<<y<<endl;}      // protected->protected
    
        void print_6(){cout<<"Z : "<<z<<endl;}      // public->protected
};
class Derived_3 : private Test{
    
        // void print_7(){cout<<"X : "<<x<<endl;}      // not Inherited
    public :
        void print_8(){cout<<"Y : "<<y<<endl;}      // protected->private
     
        void print_9(){cout<<"Z : "<<z<<endl;}      // public->private
};

int main(){
    Test T1;
    // cout<<T1.x<<endl;       // can't access
    // cout<<T1.y<<endl;       // can't access
    cout<<T1.z<<endl;

    Derived_3 D3;
    D3.print_8();
    return 0;
};