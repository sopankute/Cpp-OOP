#include<iostream>
using namespace std;

// Multiple Inheritance

class Engineer{
    public :
        Engineer(){}
        Engineer(int y){cout<<"Engineer...."<<y<<endl;}

        void work(){
            cout<<"Working as Engineer..."<<endl;
        }
};
class Youtuber{
    public :
        Youtuber(){}
        Youtuber(int x){cout<<"Youtuber..."<<x<<endl;}

        void work(){
        cout<<"Working as Youtuber..."<<endl;
        }
};
class Abhishek : public Youtuber, public Engineer{
    public :
        
        Abhishek(int x, int y) : Youtuber(x), Engineer(y) { // Base class constructor call in initializer list
            cout<<"Abhishek... "<<x<<" "<<y<<endl;
        }
};
int main(){
    Abhishek obj(11, 22);
    // obj.work();             // ambiguous error

    // method 1
    obj.Engineer::work();   // Working as Engineer...
    obj.Youtuber::work();   // Working as Youtuber...

    // Engineer engObj = (Engineer)obj.work();    // not work

    // method 2 (Slicing)
    Engineer engObj = obj;      // Slicing in cpp
    engObj.work();          // Working as Engineer...

    Youtuber youObj = obj;   // obj can provide only Youtuber's functions and data
    youObj.work();          // Working as Youtuber...
    
    // method 3  (Type-cast)
    // obj of Abhishek typecast to Engineer
    static_cast<Engineer>(obj).work();  // Working as Engineer...
    static_cast<Youtuber>(obj).work();  // Working as Youtuber...
    
    return 0;
}